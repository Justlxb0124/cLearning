//
// Created by lxb on 2021/12/15.
//
#include "include/io_utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SwapInt(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void Swap(void *first, void *second, int size) {
  void *temp = malloc(size);
  if (temp) {
    memcpy(temp, first, size);
    memcpy(first, second, size);
    memcpy(second, temp, size);

    free(temp);
  } else {
    // ...
  }
}

#define SWAP(a, b, type) {type temp = a; a = b; b = temp;}

int main() {
  int a = 0;
  int b = 1;
  SwapInt(&a, &b);

  double x = 3.0;
  double y = 4.0;
  Swap(&x, &y, sizeof(double));

  SWAP(a, b, int);
  SWAP(x, y, double);


  PRINT_INT(a);
  PRINT_INT(b);
  PRINT_DOUBLE(x);
  PRINT_DOUBLE(y);
  return 0;
}
