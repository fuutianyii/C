#include <stdio.h>

int main(void)
{
    int *p1,*p2,*p,a,b;
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    if (*p1<*p2)
    {
        p=p1;
        p1=p2;
        p2=p;
    }
    printf("%x %x\n",p1,p2);
    printf("%d %d\n",*p1,*p2);
    return 0;
}
