#include <stdio.h>

int main(void)
{

    int a=0x12345678;
    char *p;
    p=&a;
    printf("a=%#x\n",a);
    printf("p=%#x\n",*p);
}
