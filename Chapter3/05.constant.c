//
// Created by lxb on 2021/12/6.
//
#include <stdio.h>

#define COLOR_RED 0xFF0000

int main() {

  const int kRed = 0xFF0000;
  const int kGreen = 0x00FF00;
  const int kBlue = 0x0000FF;
  printf("kRed: %d\n", kRed);

  // 正常的赋值操作无法修改以上的三个常量
  // 但是可以通过指针的操作来修改, 但是跟编译器有关，macos 不行
  // 通过 debug 观察内存数据，发现确实已经修改了内存中的值
  int *p_k_red= &kRed;
  *p_k_red = 0;
  printf("kRed: %d\n", kRed);

  // 无法修改的 const，宏(macro)
  // 不允许赋值，是真正的常量
  printf("COLOR_RED: %d\n", COLOR_RED);

  // 取消宏定义
#undef COLOR_RED

  // 字面量 literal
  3;
  3u;
  3l;
  3.f;
  3.9;
  'c';
  "cs";
  L"中";
  L"中国";

  return 0;
}

