#include <stdio.h>
#include <limits.h>

int main() {

  short int short_int = 0;

  int i = 0;

  long int long_int = 0;

  long long long_long = 0;

  // %hd: short decimal
  // %hu: unsigned short decimal
  // %d: decimal
  // %u: unsigned
  // %ld: long decimal
  // %lld: long long decimal

  // %o: oct, 8 进制
  // %x: hex, 16 进制
  // \n: 换行符
  printf("short int: %lu\n", sizeof(short int));
  printf("int: %lu\n", sizeof(int));
  printf("long int: %lu\n", sizeof(long int));
  printf("long long: %lu\n", sizeof(long long));

  printf("max int: %d, min %d\n", INT_MAX, INT_MIN);
  printf("max long: %ld, min long %ld\n", LONG_MAX, LONG_MIN);
  printf("max ll: %lld, min ll %lld\n", LONG_LONG_MAX, LONG_LONG_MIN);
  printf("unsigned max int: %u\n", UINT_MAX);

  return 0;
}
