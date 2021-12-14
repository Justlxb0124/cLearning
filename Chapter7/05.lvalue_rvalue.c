//
// Created by lxb on 2021/12/14.
//

int main() {
  // 等号左边一定是内存空间
  // 等号右边一定是值
   int a;
   a = 2;

   int *p = &a;
   *p = 2;

   int b = *p;
   // &a = p; ERROR! &a 是变量的地址，是一个值，不能作为左值
   // *p + 1 = 3; ERROR!


   // left: storage
   // right: value
   return 0;
}