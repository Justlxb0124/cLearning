//
// Created by lxb on 2021/12/14.
//

#include "include/io_utils.h"
#include <stdio.h>

int main() {
  double a = 2;
  double *p = &a;
  double **pp = &p;

  // 往后移动对应类型的内存个数
  PRINT_INT(pp + 1);
  PRINT_INT(pp);
  PRINT_INT(sizeof(double *)); // int 指针占 4 个字节，所以 p + 1 的值往后移动 4 个字节

  int array[] = {0, 1, 2, 3, 4};
  int *p2 = array;
  PRINT_INT(*p2 + 4);
  PRINT_INT(array[4]);
  PRINT_INT(*(array + 4));
  PRINT_INT(p2[4]);
  // 所以数组 array 可以理解为 int * const，不能被重新赋值，但是元素可以修改
  PRINT_BOOL(p2 + 3 > p2 + 1);
  return 0;

}