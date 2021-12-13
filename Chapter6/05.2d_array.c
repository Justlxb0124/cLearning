//
// Created by lxb on 2021/12/13.
//

#include <stdio.h>
#include "include/io_utils.h"

int SumIntArray(int rows, int columns, int array[rows][columns], int result[]) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i][j];
    }
  }
}

int main() {
  int vehicle_limits[5][2];

  // 长度为 2 的一维数组
  // vehicle_limits[0]

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      vehicle_limits[i][j] = i + j;
    }
  }

  int scores[5][4] = {
      {134, 123, 111, 213},
      {111, 53, 12, 213},
      {134, 123, 333, 213},
      {324, 1235, 12, 123},
      {1234, 2315, 111, 11}
  };

  // 初始化的数组需要清零
  int result[5] = {0};
  SumIntArray(5, 4, scores, result);
  PRINT_INT_ARRAY(result, 5);
}

