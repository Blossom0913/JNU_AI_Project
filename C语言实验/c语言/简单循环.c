#include <stdio.h>
#include <stdlib.h>
void Test(int n) {
　　for (int i = 0; i < 10000; ++i){
　　//do nothing, just waste time
　　}
　　printf("%d, ", n);
}
int main(int argc, char* argv[]){
　　for (int i = 0; i < 10; ++i)
　　Test(i);
　　system("pause");
　　return 0;
}
// ————————————————
// 版权声明：本文为CSDN博主「鲸落寰宇」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/weixin_42819452/article/details/1