//
// Created by lxb on 2021/12/14.
//

#include <stdio.h>
#include "include/io_utils.h"

/*
 * 正常来说调用函数内存和寄存器之间会进行两次拷贝
 * 第一次是将数据写入到栈上的寄存器上然后返回给主函数
 * 主函数再将函数返回的值写入到内存中
 * 为了提升效率，可以将指针传入到函数中，将数据直接写入到指针处
 */

int SumIntArray(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}

/*
 * 将指针传入，就什么都不需要返回了
 * 直接修改指针指向的内存
 */
void SumIntArray2(int array[], int length, int *sum) {
  *sum = 0;
  for (int i = 0; i < length; ++i) {
    *sum += array[i];
  }
}

int main() {
  int array[] = {0, 1, 2, 3, 4};
  int sum = SumIntArray(array, 5);
  int sum2;
  SumIntArray2(array, 5, &sum2);
  return 0;
}
