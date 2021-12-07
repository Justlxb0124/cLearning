//
// Created by lxb on 2021/12/7.
//
#include <stdio.h>

// 函数原型， 声明了函数原型后，就可以直接调用，不需要考虑具体实现的问题
// 只关注参数和返回值得类型和顺序，保证能够规范调用即可
void EmptyParamList(void);
int Add(int left, int right);

/*
 * 函数调用的条件：
 * 1. 函数名
 * 2. 函数返回值类型，如果没写，默认为 int
 * 3. 函数参数列表，参数类型，以及参数的顺序， 参数形参名不重要
 */
int main() {
  EmptyParamList();

  int result = Add(1, 3);
  return 0;
}

void EmptyParamList(void) {
  puts("hello world!");
}

