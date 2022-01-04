//
// Created by lxb on 2022/1/4.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/io_utils.h"
int main() {
  char string[] = "C, 1972; C++, 1983; Java, 1995; Rust, 2010; Kotlin, 2011";

  typedef struct {
    char *name;
    int year;
  } Language;

  const char *language_break = ";";
  const char *field_break = ",";

  int language_capacity = 3;
  int language_size = 0;

  Language *languages = malloc(sizeof (Language) * language_capacity);
  if (!languages) {
    abort();
  }

  char *next = strtok(string, field_break);
  while(next) {
    Language language;
    language.name = next;

    // strtok 是有状态的，如果传入 null，则会继续去拆分之前的字符串
    // 如果再传一个新的字符串进来，那么之前的状态就会被清空了
    next = strtok(NULL, language_break);
    if (next) {
      language.year = atoi(next);
      if (language_size + 1 >= language_capacity) {
        language_capacity *= 2;
        languages = realloc(languages, sizeof (Language) * language_capacity);
        if (!languages) {
          abort();
        }
      }

      languages[language_size++] = language;
      next = strtok(NULL, field_break);
    }

    PRINTLNF("languages: %d", language_size);
    PRINTLNF("languages capacity: %d", language_capacity);

    for (int i = 0; i < language_size; ++i)
      PRINTLNF("Language[name = %s, year = %d]", languages[i].name, languages[i].year);
  }
  free(languages);
}

