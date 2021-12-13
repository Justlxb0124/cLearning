//
// Created by lxb on 2021/12/13.
//

#include <stdio.h>
#include "include/io_utils.h"

#define LENGTH 10

// 当数组作为传入参数时，一定要同时把数组的长度传进去
int SumIntArray(int array[], int count) {
  int sum = 0;
  for (int i = 0; i < count; ++i) {
    sum += array[i];
  }
  return sum;
}

int main() {
  int array[LENGTH] = {1, 2,3,4,5,6,4,4,6,2};
  PRINT_INT(SumIntArray(array, LENGTH));
  return 0;
}

