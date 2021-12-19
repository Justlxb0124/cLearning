//
// Created by lxb on 2021/12/19.
//
/**
 * 编写一个函数来判断一个地址为大端序还是小端序
 */

#include "include/io_utils.h"
#include <stdio.h>

int IsBigEndian() {
  union {
    char c[2];
    short s;
  } value = {.s=0x100};

  return value.c[0] == 1;
}

/**
 * 调换顺序
 * @param original
 * @return
 */
int ToggleEndian(int original) {
  union {
    char c[4];
    int i;
  } value = {.i = original};

  char temp = value.c[0];
  value.c[0] = value.c[3];
  value.c[3] = temp;
  temp = value.c[1];
  value.c[1] = value.c[2];
  value.c[2] = temp;
  return value.i;
}

/**
 * 指针版本
 * @return
 */
int isBigEndian2() {
  short s = 0x100;
  /*
   * 这里声明 p 为字符指针变量的原因为：
   * 字符指针变量表示数组的单个元素大小为一个字节
   *         -----------
   *         | 00 | 01 |
   *         -----------
   *         ^
   *         p
   * 若 *p 为字符指针，那么 p[0] 的内容为 00，p[1] 的内容为 01
   * 若 *p 为 short 指针，那么 p[0] 就直接代表整个 short 变量的内容了即 0001
   */
  char *p = (char *) &s;
  return p[0] == 1;
}

int ToggleEndian2(int original) {
  char *p = (char *) &original;
  char temp = p[0];
  p[0] = p[3];
  p[3] = temp;
  temp = p[1];
  p[1] = p[2];
  p[2] = temp;

  return original;
}

int main() {
  PRINT_INT(IsBigEndian());
  PRINT_INT(isBigEndian2());
  int original = 0x12345678;
  PRINT_INT(original);
  PRINT_HEX(original);
  PRINT_INT(ToggleEndian(original));
  PRINT_HEX(ToggleEndian2(original));
  return 0;
}


