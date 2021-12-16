//
// Created by lxb on 2021/12/15.
//
#include <stdlib.h>
#include "include/io_utils.h"
#include <stdio.h>

// 结构体是将不同字段聚合在一起
// 联合体是共用一块内存
// 以下联合体占用 8 个字节
typedef union Operand {
  int int_operand;  // 4
  double double_operand;  // 8
  char *string_operand; // 8
} Operand;

/*
 * 联合体使用内存覆盖技术，同一时刻只能保存一个成员的值，如果对新的成员赋值，就会把原来成员的值覆盖掉。
 * 结构体占用的内存大于等于所有成员占用的内存的总和，共用体占用的内存等于最长的成员占用的内存。
 * 实际使用场景：
 *  用一个结构体表示老师或者学生信息，某个字段如果是老师的话表示课程名称，如果是学生的话表示考试分数。那么这个信息可以
 *  定义一个联合体，不然的话老师和学生各自会有一个无用成员变量，增加内存占用。
 */
typedef struct Instruction {
  int operator;
  Operand operand;
} Instruction;


int main() {
  PRINT_INT(sizeof(union Operand));
  return 0;
}
