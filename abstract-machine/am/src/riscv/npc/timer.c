#include <am.h>
#include <./riscv/riscv.h>
#include <stdio.h>

uint32_t boot_time;
void __am_timer_init() {
boot_time = inl(RTC_ADDR);
}
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
uint64_t time;
uint32_t time_hie;
time_hie = inlm(RTC_ADDR) - boot_time;
time = time_hie;
printf("uptime = %d\n",time);
uptime->us = time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
