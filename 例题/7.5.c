#include <stdio.h>

int main(void)
{
    int max4(int a,int b,int c,int d);
    printf("%d\n",max4(9,2,4,5));
}
int max4(int a,int b,int c,int d)
{
    int max;
    max=a>b?a:b;
    max=c>max?c:max;
    max=d>max?d:max;
    return max;
}
int max2(int a,int b)
{
    return a>b?a:b;
}
