//
// Created by lxb on 2021/12/6.
//
#include <stdio.h>

int main() {
  // <type> <name>;
  int value;

  // <type> <name> = <initialized value>
  int value_init = 3;

  // 可以重新赋值
  value = 4;
  value_init = 5;

  value = value_init;

  // 可以查看变量占据内存的大小
  printf("size of value: %d\n", sizeof(value));
  // 可以查看变量的内存地址, 使用十六进制打印
  printf("address of value: %x\n", &value);
  // 想打印完成格式的地址，加个#
  printf("address of value: %#x\n", &value);




  return 0;
}
