//
// Created by lxb on 2021/12/6.
//
#include <stdio.h>

int main() {
  // 精度只能保证 6 位
  float a_float = 3.14f;
  // 精度能够保证到 15 -16 位
  double a_double = 3.14;

  // 所有涉及到金钱相关的运算，不能使用 float，必须用 double

  printf("sizeof of float: %lu\n", sizeof(float));
  printf("sizeof of double: %lu\n", sizeof(double));
}
