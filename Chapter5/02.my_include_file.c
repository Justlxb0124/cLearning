//
// Created by lxb on 2021/12/7.
//

/*
 * 两种引入头文件的方式
 *
 * 1. #include "..." 双引号方式
 *    首先查找当前源文件所在路径
 *    查找工程的头文件搜索路径
 * 2. #include <...> 尖括号方式
 *    查找工程的头文件搜索路径
 *    在 cMake 文件中将目录添加进去，就可以使用尖括号方式添加
 */
#include <stdio.h>
#include "include/factorial.h"

int main(void) {
  printf("3! = %d\n", Factorial(3));
  return 0;
}
