#include <stdio.h>
#include "include/io_utils.h"

int main() {
  /*
   * struct <结构体名> {
   *  <成员类型><成员名>;
   *  ...
   * } <结构体变量>;
   */

  // 结构体的名字不是必须的，如果需要重复定义该结构体的变量时必须写名字
  struct Person {
    char *name;
    int age;
    char *id;
  };

  typedef struct Company {
    char *name;
    char *id;
    int age;
  } Company;

  // 可以加上 typedef 避免重复写 struct
  // 后续定义该结构体变量时直接用 Person1 即可
  typedef struct Person1 {
    char *name;
    int age;
    char *id;
    Company *company;
    struct {
      int extra;
      char *extra_str;
    }extra_value;
  } Person1;

  // 变量初始化
  struct Person person = {"bonny", 24, "111111111"};
  Person1 person_1;

  person_1.company->name;
  person_1.extra_value.extra;

  PRINT_INT(person.age);
  PRINT_HEX(&person);
  PRINT_INT(sizeof(struct Person));

  struct Person *person_ptr = &person;

  return 0;
}
