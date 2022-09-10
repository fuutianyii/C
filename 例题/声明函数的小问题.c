#include <stdio.h>


int main(void)
{
    void maxer(int a,int b);
    maxer(123,-123);  //编译器发现一个不认识的函数调用，不知道该函数的返回类型，就假设为int类型，等后面编译的时候编译器看到实际的函数，它认为有两个同名的函数，一个是文件中的函数，一个是编译器假设返回int的那个
    //因此只有int返回值的函数不用申明
    printf("max number is %d\n",max(123,-123));
}

void maxer(int a,int b)
{
    if(a>b)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n",b);
    }
}


int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
