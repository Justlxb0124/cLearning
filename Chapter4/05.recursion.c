//
// Created by lxb on 2021/12/7.
//
#include <stdio.h>

// 阶乘
unsigned int Factorial(unsigned int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * Factorial(n - 1);
  }
}

// 斐波那契数列
unsigned int Fibonacci(unsigned int n) {
  if (n == 1 || n == 0) {
    return n;
  } else {
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  }
}

int main(void) {
  printf("3!: %d\n", Factorial(3));
  printf("5!: %d\n", Factorial(5));
  printf("10!: %d\n", Factorial(10));

  return 0;
}
