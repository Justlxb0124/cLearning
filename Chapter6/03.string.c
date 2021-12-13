//
// Created by lxb on 2021/12/13.
//
#include <stdio.h>
#include <stddef.h>
#include "include/io_utils.h"

int main() {
  // 字符串必须以 \0 （NULL） 作为结尾，所以定义大小时，要比真实字符数量大1
  char string[12] = "Hello World";
  for (int i = 0; i < 11; ++i) {
    PRINT_CHAR(string[i]);
  }
  PRINT_STRING(string);

  char string_zh[] = "我爱你中国";
  wchar_t ws[] = L"我爱你中国";
  return 0;
}