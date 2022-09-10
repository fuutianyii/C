#include <stdio.h>

int main(void)
{
    int st1,st5;
    st1=10;
    printf("The firth student age is %d\n.",age(st1,5));
}

int age(int st1,int num)
{
    int stn;
    stn=st1+(num-1)*2;
    return stn;
}
