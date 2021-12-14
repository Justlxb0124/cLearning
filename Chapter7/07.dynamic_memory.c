//
// Created by lxb on 2021/12/14.
//
/*
 * 常见的指针使用错误
 * 1. 忘记在使用完毕之后释放内存
 * 2. 使用了已经释放的内存
 * 3. 使用了超出边界的内存
 * 4. 改变内存的指针，导致无法正常释放
 *
 * 动态内存使用建议
 * 1. 避免修改指向已分配的内存的指针
 * 2. 对于 free 之后的指针主动置为 NULL
 * 3. 避免将过多的指针指向动态分配的内存
 * 4. 动态内存要遵从谁分配谁释放的原则
 */
#include <stdio.h>
#include <stdlib.h>
#include "include/io_utils.h"

#define PLAYER_COUNT 10

void InitPointer(int **ptr, int length, int default_value) {
  *ptr = malloc(sizeof(int) * length);
  for (int i = 0; i < length; ++i) {
    (*ptr)[i] = default_value;
  }
}

int main() {
  // malloc 调用后不会对内存进行初始化，里面存放的数据不会被清理
  // 拿到分配的内存后需要先手动进行初始化赋值
  int *players = malloc(sizeof(int) * PLAYER_COUNT);
  for (int i = 0; i < PLAYER_COUNT; ++i) {
    players[i] = i;
  }
  PRINT_INT_ARRAY(players, PLAYER_COUNT);

  // 使用自定义指针初始化函数
  int *players2;
//  InitPointer(&players2, PLAYER_COUNT, 0);
  // 如果希望申请的内存直接清零的话，直接使用函数 calloc 即可
  players2 = calloc(PLAYER_COUNT, sizeof(int));

  for (int i = 0; i < PLAYER_COUNT; ++i) {
    PRINT_INT(players2[i]);
  }

  // 如果后续想修改所指空间的大小，使用 realloc 函数
  players2 = realloc(players2, PLAYER_COUNT * 2 * sizeof(int));
  PRINT_INT_ARRAY(players2, PLAYER_COUNT * 2);

  // 所有调用函数返回的指针变量都有可能是空指针，即内存分配失败
  if (players2) {

    free(players2);
  } else {

  }

  // 因为是在堆区分配的内存，所以必须手动释放
  free(players);
  free(players2);
  return 0;
}

