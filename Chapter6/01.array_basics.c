#include <stdio.h>
#include "include/io_utils.h"

#define ARRAY_SIZE 10

int main() {
  int array[ARRAY_SIZE];

  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
    PRINTLNF_COMPLETE("value: %d", array[i]);
  }

  char array_char[5] = {[2] = 'o'};
  for (int i = 0; i < 5; ++i) {
    printf("char: %c\n", array_char[i]);
  }
  return 0;
}
