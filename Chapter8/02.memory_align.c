//
// Created by lxb on 2021/12/15.
//

#include <stdio.h>
#include "include/io_utils.h"
#include <stdlib.h>

int main() {
  typedef struct Person {
    char *name;
    int age;
    char *id;
  } Person;

  Person person = {.name="bonny", .id="111111111"};

  PRINT_INT(person.age);
  person.age = 30;

  typedef struct {
    char a;
    char b;
    int c;
    short d;
    double e;
  } Align;

  typedef struct {
    char a; //1
    char b; //1
    short d;  //2
    int c;  //4
    double e; //8
  } OptimizeAlign;

  Align align = {'a', 'b', 3, 4, 5.0};
  OptimizeAlign optimize_align = {'a', 'b', 4, 1, 3.3};

  return 0;
}