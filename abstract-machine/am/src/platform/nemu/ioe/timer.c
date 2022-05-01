#include <am.h>
#include <nemu.h>
#include <time.h>

void __am_timer_init() {

}
struct timespec nows;
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = nows.tv_sec * 1000000 + nows.tv_nsec / 1000;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
