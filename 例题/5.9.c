#include <stdio.h>

int main(void)
{
    int n,i;
    printf("input your number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime\n",n);
            break;
        }
    }
    if (i==n)
    {
        printf("%d is a prime\n",n);
    }
    return 0;
}
