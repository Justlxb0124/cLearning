//
// Created by lxb on 2021/12/8.
//
#include <stdio.h>
/*
 * 1. #ifdef: 如果定义了
 * 2. #ifndef: 如果没定义
 * 3. #if: 如果...
 *
 * #endif
 *
 * #if define(MACRO) 等价于 #ifdef MACRO
 *
 */

#define DEBUG ddd

void dump(char *message) {
#ifdef DEBUG
  puts(message);
#endif
}

// 以下条件编译的意思为，如果是在 c++ 环境下，函数原型前后要加上相应的字符
// 如果是在 c 环境下，就只有一个函数原型
#ifdef __cplusplus
exten "C" {
#endif
// ...
  int Add(int left, int right);
#ifdef __cplusplus
};
#endif

int main(void) {
  dump("main start");
  puts("hello world!");
  dump("main end");

  // 查看当前程序运行在什么样的 c 版本环境中
  printf("__STDC_VERSION__: %ld\n", __STDC_VERSION__);

#if __STDC_VERSION__ >= 201112
  puts("c11!!");
#elif __STDC_VERSION__ >= 199901
  puts("c99!!");
#else
  puts("maybe c90?");
#endif

  return 0;
}
