#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

int ww = 400;
int hh = 300;
void __am_gpu_init() {
  // int i;
  // int w = ww;
  // int h = hh;
  // uint32_t *fb = (uint32_t *)(uintptr_t) FB_ADDR;
  // for(i=0; i<w * h; i++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = ww, .height = hh,
    .vmemsz = 32
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    uint32_t *fb = (uint32_t *)(uintptr_t) FB_ADDR;
    int c, r;
    int y = ctl->y, x = ctl->x , w = ctl->w, h = ctl->h;
    uint32_t *pixels = ctl->pixels;
    
    for(r = y; r < y+h; r++)
      for(c = x; c < x+w; c++){
        int dataone = c+(r*ww);
        fb[dataone] = pixels[dataone];
        outl(SYNC_ADDR, 1);
      }
    // outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
