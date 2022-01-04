//
// Created by lxb on 2022/1/4.
//
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "include/io_utils.h"

int main() {
  PRINT_INT(atoi("123"));
  PRINT_INT(atoi("-123"));
  PRINT_INT(atoi("    1232ddd424asdfa"));
  PRINT_INT(atoi("0x10"));

  char const *const kInput = "1   200000000000000 3 -4 4dfa bye";
  PRINTLNF("Parse : %s", kInput);

  char const *start = kInput;
  char *end;

  while(1) {
    errno = 0;

    const long i = strtol(start, &end, 10);
    if (start == end) {
      break;
    }

    printf("'%.*s'\t ==> %ld.", (int)(end - start), start, i);

    if (errno = ERANGE) {
      perror("");
    }

    putchar('\n');
    start = end;
  }

  PRINTLNF("Left: %s", end);
  return 0;
}

