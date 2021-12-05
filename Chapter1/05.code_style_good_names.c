//
// Created by lxb on 2021/12/5.
//
#include <stdio.h>
int main() {
  int sum = 0;
  int i = 0;

  while (i < 10) {
    sum += i;
    i++;
  }

  printf("%d\n", sum);
  return 0;
}