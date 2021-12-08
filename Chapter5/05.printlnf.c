//
// 实现一个自带换行符的 printf 函数
// Created by lxb on 2021/12/8.
//
#include <stdio.h>
#include <stdarg.h>


// 定义函数原型
void Printlnf(const char* format, ...){
  va_list args;
  va_start(args, format);

  vprintf(format, args);
  printf("\n");

  va_end(args);
}

// ## 的作用为如果没有可变长参数，前面的逗号自动去掉
#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)

// "#宏的参数"  表示取出宏的参数的名字，字符串形式
#define PRINT_INT(value) PRINTLNF(#value": %d", value)

// __FILE__ : 所在的文件
// __LINE__ : 所在的代码行号
// __FUNCTION__ : 所在的函数
#define PRINTLNF_COMPLETE(format, ...) printf("("__FILE__": %d) %s: "format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)


int main() {
  int value = 4;
  Printlnf("Hello World!!");
  Printlnf("Hello World!!");
  PRINTLNF("hello world!!!%d", value);
  PRINT_INT(value);
  PRINTLNF_COMPLETE("hello world!!%d", value);
  return 0;
}

