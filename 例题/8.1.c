#include <stdio.h>

int main(void)
{
    int a =100,b=10;
    int *pointer_1=&a;
    int *pointer_2=&b;

    printf("a=%d,b=%d\n",a,b);
    printf("a的地址=%x b的地址=%x\n",&a,&b);
    printf("a的地址=%u b的地址=%u\n",&a,&b);//这里不用%d以为地址可能大于2的31方，会超出int的取值范围
    printf("a=%d,b=%d\n",*pointer_1,*pointer_2);
    printf("a的地址=%x b的地址=%x\n",pointer_1,pointer_2);
    printf("a的地址=%d b的地址=%d\n",pointer_1,pointer_2);//这里可以测试本次内存地址的值是否超出int的取值范围
    
}
