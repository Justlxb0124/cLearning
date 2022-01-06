#include <stdio.h>
#include <ctype.h>
#include "include/io_utils.h"
#include "include/time_utils.h"

int main() {
  PRINT_INT(isdigit('4'));
  PRINTLNF("time: %lld", TimeInMillisecond());
  return 0;
}
