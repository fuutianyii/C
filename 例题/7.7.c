#include <stdio.h>

int main(void)
{
    int n=10,num=0;
    num=fac(n);
    printf("%d!=%d\n",n,num);
}

int fac(int n)
{
    int f;
    if(n==1)
    {
        f=1;
    }
    else if(n==0)
    {
        printf("error\n");
    }
    else
    {
        f=fac(n-1)*n;
    }
    return f;
}
