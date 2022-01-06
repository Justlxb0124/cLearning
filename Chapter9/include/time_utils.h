//
// Created by lxb on 2022/1/6.
//
#include <sys/time.h>

#ifndef CHAPTER9_INCLUDE_TIME_UTILS_H_
#define CHAPTER9_INCLUDE_TIME_UTILS_H_


typedef long long long_time_t;

long_time_t  TimeInMillisecond(void) {
#if defined(__APPLE__)
  struct timeval time_value;
  gettimeofday(&time_value, NULL);
  return time_value.tv_sec * 1000LL + time_value.tv_usec / 1000;
#endif
}

#endif //CHAPTER9_INCLUDE_TIME_UTILS_H_
