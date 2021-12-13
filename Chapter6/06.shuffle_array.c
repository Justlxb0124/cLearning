//
// Created by lxb on 2021/12/13.
//

#include <stdio.h>
#include "include/io_utils.h"
#include <stdlib.h>
#include <time.h>

#define PLAYER_COUNT 50

void SwapElements(int array[], int first, int second) {
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}

void ShuffleArray(int array[], int length) {
  srand(time(NULL));
  // 默认范围是 [0, RAND_max]
  for (int i = 0; i < length; ++i) {
    int random_num = rand() % length;
    SwapElements(array, i, random_num);
  }
}

int main() {
  int players[PLAYER_COUNT];
  for (int i = 0; i < 50; ++i) {
    players[i] = i;
  }

  PRINT_INT_ARRAY(players, PLAYER_COUNT);
  ShuffleArray(players, PLAYER_COUNT);
  PRINT_INT_ARRAY(players, PLAYER_COUNT);
  return 0;
}