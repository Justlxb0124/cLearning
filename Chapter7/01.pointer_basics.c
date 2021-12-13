//
// Created by lxb on 2021/12/13.
//

#include <stdio.h>
#include "include/io_utils.h"

int main() {
  int a = 111;
//  scanf("%d", &a);

  // & 取出的是变量的地址
  // * 在定义时表示的是声明指针变量
  // 后续再次出现 *p 表示取出指针对应地址存放的值
  int *p = &a;
  // *pp => p
  int *pp = &p;

  PRINT_HEX(p);
  PRINT_HEX(&a);

  PRINT_INT(a);
  PRINT_INT(*p);
  return 0;

  // 直观来讲，指针就是一个变量，他存储的是变量的地址，通过 * 可以取出所表示地址的值
}



