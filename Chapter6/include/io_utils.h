//
// Created by lxb on 2021/12/12.
//

#ifndef CHAPTER6_INCLUDE_IO_UTILS_H_
#define CHAPTER6_INCLUDE_IO_UTILS_H_

// ## 的作用为如果没有可变长参数，前面的逗号自动去掉
#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__)

// "#宏的参数"  表示取出宏的参数的名字，字符串形式
#define PRINT_INT(value) PRINTLNF(#value": %d", value)
#define PRINT_FLOUT(value) PRINTLNF(#value": %f", value)
#define PRINT_DOUBLE(value) PRINTLNF(#value": %lf", value)
#define PRINT_CHAR(value) PRINTLNF(#value": %c", value)
#define PRINT_STRING(value) PRINTLNF(#value": %s", value)


// __FILE__ : 所在的文件
// __LINE__ : 所在的代码行号
// __FUNCTION__ : 所在的函数
#define PRINTLNF_COMPLETE(format, ...) printf("("__FILE__": %d) %s: "format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)

#endif //CHAPTER6_INCLUDE_IO_UTILS_H_
