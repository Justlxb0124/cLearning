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

  // 表示用一个只读指针去指向一个 int 变量
  int * const cp = &a;
  // 表示用一个指针变量去指向一个 int 常量
  int const * cp2 = &a;
  // 表示用一个只读指针指向一个 int 常量
  int const * const cp3 = &a;

  PRINT_INT(*p);
  PRINT_INT(a);

  return 0;
}
