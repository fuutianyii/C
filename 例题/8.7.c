#include <stdio.h>

int main()
{
    int i,a[10],*p=a;//此处*p=a并无卵用，因为此处a只是申明
    printf("please enter 10 integer numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",p++);
    }
    p=a;
    for(i=0;i<10;i++,p++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
