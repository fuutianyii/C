#include <stdio.h>

int main()
{
    int max(int x,int y);
    int a[10],i,maxer,n;
    printf("enter 10 integer numbers:");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    maxer=a[0];
    n=0;
    for (i=0;i<10;i++)
    {
        if (maxer<a[i])
        {
            maxer=max(maxer,a[i]);
            n=i;
        }
    }
    printf("The largest number is %d\n",maxer);
    printf("It is the %dth number.\n",n+1);
}

int max(int x,int y)
{
    return x>y?x:y;
}
