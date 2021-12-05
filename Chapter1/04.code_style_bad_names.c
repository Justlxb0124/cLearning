//
// Created by lxb on 2021/12/5.
//
#include <stdio.h>
int main() {
  int a = 0;
  int i = 0;

  while (i < 10) {
    a += i;
    i++;
  }

  printf("%d\n", a);
  return 0;
}