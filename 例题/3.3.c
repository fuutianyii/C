#include <stdio.h>
int main(void)
{
    char c1,c2;
    c1='A';
    c2=c1+32;
    printf("%c\n",c2);//char
    printf("%d\n",c2);//十进制ASCII码
    printf("%p\n",c2);//地址
    return 0;
}
