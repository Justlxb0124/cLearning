//
// Created by lxb on 2021/12/6.
//
#include <stdio.h>
#include <stdbool.h>

int main() {
  _Bool is_enable = true;
  bool is_visible = false;

  // if else
  /*
   * 写法1：
   * if(<condition>) {
   *  ...
   *  true statement
   *  ...
   * } else {
   *  ...
   *  false statement
   *  ...
   * }
   *
   * 写法2：
   * if(<condition1>) {
   *  ...
   *  true statement
   *  ...
   * } else if (<condition2>) {
   *  ...
   *  true statement
   *  ...
   * } else if (<condition3>) {
   *  ...
   *  true statement
   *  ...
   * } else {
   *  ...
   *  false statement
   *  ...
   * }
   */
#define MAGIC_NUMBER  10
  int user_input;
  printf("Please input a number: \n");
  scanf("%d", &user_input);
  if (user_input > MAGIC_NUMBER) {
    printf("Your number is bigger!");
  } else if (user_input < MAGIC_NUMBER) {
    printf("Your number is smaller!");
  } else {
    printf("Yes! You got it!");
  }

  // switch
  /*
   * switch (<condition>) {
   *  case 0: {
   *    ...
   *  }
   *  break;
   *
   *  case 1: {
   *    ...
   *  }
   *  break;
   *  default: {
   *    ...
   *  }
   * }
   */

#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
  int left, right;

  char operator;
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
  return 0;
}

