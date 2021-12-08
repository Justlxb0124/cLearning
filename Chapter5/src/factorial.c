//
// Created by lxb on 2021/12/7.
//

// 引入头文件
// 通过路径的方式引入
#include "../include/factorial.h"

unsigned int Factorial(unsigned int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * Factorial(n - 1);
  }
}

