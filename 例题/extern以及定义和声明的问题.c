#include <stdio.h>


int a;//定义并且申明a
int c(void)
{
    printf("2");
}
int main(void)
{
    extern int b;//仅申明b，告诉编译器b以后会被定义，
    c();
    printf("%d",b); //程序会将主函数外部的全局变量先定义
    //理解:编译器会先从上到下检查语法错误，若没有问题便尝试运行main函数，因此申明b为外部变量时printf("%d",b);不会直接报错，但是若main函数后没有定义b，则会报错。
}
int b=1;
