//
// Created by lxb on 2021/12/14.
//

#include <stdio.h>
#include <stdlib.h>
#include "include/io_utils.h"

// 1. 表示函数名叫 f，返回的是一个 int 指针变量
int *f1(int, double);
// 2. 表示函数指针名叫 *f，返回值是一个 int 变量
int (*f2)(int, double);
// 3. 与 2 的区别在于返回值是一个 int 指针变量
int *(*f3)(int, double);

typedef int (*Func)(int, double);

int Add(int left, double right) {
  return (int)(left + right);
}

void InitPointer(int **ptr, int length, int default_value) {
  *ptr = malloc(sizeof(int) * length);
  for (int i = 0; i < length; ++i) {
    (*ptr)[i] = default_value;
  }
}

int main() {
  PRINT_HEX(&main);
  PRINT_HEX(&InitPointer);

  int *p;
  void (*func)(int **ptr, int length, int default_value) = &InitPointer;
  func(&p, 10, 0);
//  InitPointer(&p, 10, 0);   函数名原理与数组名类似，都是表示一个地址
  PRINT_INT_ARRAY(p, 10);
  free(p);

  Func func1 = &Add;
  int result = func1(1, 3.0);
  PRINT_INT(result);
  return 0;
}


