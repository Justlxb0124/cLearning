//
// Created by lxb on 2021/12/6.
//

#include <stdio.h>
#include <stddef.h>

int main() {
  // 字符集 ASCII
  char a = 'a'; // 97
  char char_1 = '1'; // 49
  char char_2 = '2'; // 48

  char i = 0;

  // 加上转义符即可表示数字对应的字符
  char char_1_escape = '\61'; // 61 是 49 的八进制，对应的字符就是 '1'
  char char_2_escape = '\x31'; // 31 是 49 的十六进制，对应的字符就是 '1'
  char newLine = '\n';
  char char_n = 'n';

  /*
   * 特殊字符：
   * \n: newline
   * \b: backspace
   * \r: return
   * \t: table
   * \': ', 字符的字面量
   * \": ", 字符串的字面量
   */
  printf("char a: %d\n", a);
  printf("char 1: %d\n", char_1);
  printf("char 2: %c\n", char_2);
  printf("char i: %d\n", i);
  printf("char char_1_escape: %c\n", char_1_escape);
  printf("char char_2_escape: %c\n", char_2_escape);

  printf("cahr newLine: %d\n", newLine);
  printf("cahr n: %c\n", char_n);


  // 以上都是窄字符，用 7 位就能表示，但是如果需要表示中文等字符时，就不够用了
  // 中文使用 Unicode 字符集，已支持一百多万个字符，涵盖世界上几乎全部的字符
  wchar_t zhong = L'中';
  wchar_t zhong_hex = L'\u4E2D';
  printf("中：%d\n", zhong);
  printf("中_hex：%d\n", zhong);
  return 0;
}