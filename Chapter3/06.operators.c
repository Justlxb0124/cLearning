//
// Created by lxb on 2021/12/6.
//
#include <stdio.h>

int main() {
  int first = 0;
  int second;
  int third;

  // =：赋值运算符
  // 嵌套赋值，从右往左
  third = second = first;

  int left, right;
  left = 2;
  right = 3;

  // 四则运算符
  int sum = left + right; // 5
  int diff = right - left; // 1
  int product = left * right; // 6
  int quotient = left / right; // 0

  // 若想保留小数位, 先转成 float 类型，然后再除
  int quotient_float_correct = left * 1.f / right; // 0.666667
  int remainder = left % right; // 2

  // 关系运算符 > < >= <=
  // true: 1, false: 0
  // C99 才引入 _Bool
  printf("3 > 2: %d\n", 3 > 2); // 1
  printf("3 < 2: %d\n", 3 < 2); // 0

  // 逻辑运算符 && ||
  printf("3 > 2 && 3 < 2: %d\n", 3 > 2 && 3 < 2);
  printf("3 > 2 || 3 < 2: %d\n", 3 > 2 || 3 < 2);


  // 位运算符 & | ^ ~
#define FLAG_VISIBLE 0x1  // 2^0, 0001
#define FLAG_TRANSPARENT 0x2  // 2^1, 0010
#define FLAG_RESIZABLE 0x4  // 2^2, 0100
  int window_flags = FLAG_RESIZABLE | FLAG_TRANSPARENT; // 0110

  int resizable = window_flags & FLAG_RESIZABLE;  // 0100

  int visable = window_flags & FLAG_VISIBLE;  // 0000

  // 移位运算符 << >>
#define FLAG_VISIBLE 1 << 0  // 2^0, 0001
#define FLAG_TRANSPARENT 1 << 1  // 2^1, 0010
#define FLAG_RESIZABLE 1 << 2  // 2^2, 0100

  int x = 1000;
  x * 2;
  x << 1;

  x / 2;
  x >> 2;

  return 0;
}