#include <stdio.h>

int main(void)
{
    int max(int a,int n);
    printf("please enter two integer number:");
    int a,b,c;
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max is %d\n",c);
    return 0;
}
int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
