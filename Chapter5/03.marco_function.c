//
// Created by lxb on 2021/12/8.
//
#include "stdio.h"

// 宏函数会原封不动地替换传入的参数
#define MAX(a, b) a > b ? a : b

// 多行宏函数，要用换行符
#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'A' && (ch) <= 'F') || \
((ch) >= 'a' && (ch) <= 'f')


int main() {
  int max = MAX(1, 3);
  printf("%d\n", max);

  printf("is A a hex character? %d\n", IS_HEX_CHARACTER('A'));
  return 0;
}