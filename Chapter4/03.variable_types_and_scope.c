//
// Created by lxb on 2021/12/7.
//
#include <stdio.h>

// 文件作用域，整个文件中都能访问
int global_var = 1;

// 静态变量，会一直存在于函数之中，出了函数作用域不会被销毁，下次调用该函数接着用
void LocalStaticVar(void) {
  /*
   * 静态变量
   * 1. 作用域全局，内存不会因为函数退出而销毁
   * 2. int 初值默认为 0
   */
  static int static_val = 1;
  /*
   * 自动变量
   * 1. 函数、块作用域，随着函数和块的退出而销毁
   * 2. 没有默认的初值
   */
  int non_static_val = 1;

  printf("static var: %d\n", static_val++);
  printf("non static var: %d\n", non_static_val);
}

double Add(double a, double b);
// 函数原型作用域，形参 size 只能被其他形参引用，出了函数原型就不能再使用
double Sort(int size, int array[size]);

void PassByMemory(int parameter) {
  printf("%d\n", parameter);
}

// 通过寄存器变量的话，不会在内存上开辟空间
void PassByRegister(register int parameter) {
  printf("%d\n", parameter);
}

// 大括号里叫做函数的作用域
int main(void) {
  // 自动变量，进入函数的作用域，变量内存会自动分配，退出作用域内存会自动销毁
  auto int value = 0;

  // 块作用域，无法在块作用域之外访问块内的变量
  {
    auto int a = 0;
  }

  LocalStaticVar();
  LocalStaticVar();
  LocalStaticVar();

  return 0;
}
