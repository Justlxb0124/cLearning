//
// Created by lxb on 2021/12/6.
//
#include <stdio.h>

int main(){
  /*
   * while(<condition>) {
   *  ...
   *  statement
   *  ...
   * }
   */
#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
  int left, right;

  char operator;

  char command = 'y';
  while(command != 'q') {
    printf("Please input an expression: \n");
    scanf("%d %c %d", &left, &operator, &right);

    int result;
    switch (operator) {
      case ADD:result = left + right;
        break;
      case SUB:result = left - right;
        break;
      case MULTIPLY:result = left * right;
        break;
      case DIVIDE:result = left / right;
        break;
      case REM:result = left % right;
        break;
      default:printf("Unsupported operation: %c\n", operator);
        return 1;
    }
    printf("Result: %d\n", result);
    // printf("Again? Type 'q' to quit, and press any button to continue: \n");
    puts("Again? Type 'q' to quit, and press any button to continue: ");

    // scanf("%c", &command);
    // 当前输入缓存里保留了上次输入后的换行符，所以要先把换行符给取走
    getchar();
    command = getchar();
  }

  /*
   * do {
   *  ...
   *  statement
   *  ...
   * } while (<condition>)
   */

  /*
   * for(<initialization>; <condition>; <state>) {
   *  ...
   *  statement
   *  ...
   * }
   */

  // goto
  int i = 0;
  begin:
  printf("%d\n", i);
  if(i++ < 5) {
    goto begin;
  }

  return 0;
}