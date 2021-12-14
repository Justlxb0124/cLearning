//
// Created by lxb on 2021/12/14.
//
/*
 * 指针使用禁忌：
 * 1. 不要将硬编码赋值给指针
 * 2. 空指针 NULL 的用法
 * 3. 注意避免产生野指针
 */
#include <stdio.h>
#include "include/io_utils.h"

int *pointer_at_large;


// 函数一旦退出，局部变量就被销毁，指针则变成野指针
// 如果必须要这样使用，在退出前要给指针置 null
void DangerousPointer() {
  int a = 2;
  pointer_at_large = &a;
}

int main() {

  // DANGEROUS!!! 硬编码指针
  int *p = (int *)0x16b92f8a0;
  PRINT_HEX(&p);

  int *p1 = NULL;
  *p1 = 4; // error
  // 使用可能为 NULL 的指针前记得判断一下
  if(p1) {

  }

  return 0;
}
