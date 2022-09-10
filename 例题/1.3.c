#include <stdio.h>

int max(int a,int b);

int main()
{
    printf("intput two number,like this 1,2:");
    int max(int x, int y);
    int a,b,c;
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max=%d\n",c);
    return 0;
}
int max(int a,int b)
{
    int z;
    if (a>b)
    {
        z=a;
    }
    else
    {
        z=b;
    }
    return z;
}
