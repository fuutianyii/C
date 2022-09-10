#include <stdio.h>
int main()
{
    float a,b,c,tmp;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if (a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    if (a>c)
    {
        tmp=a;
        a=c;
        c=tmp;
    }
    if (b>c)
    {
        tmp=b;
        b=c;
        c=tmp;
    }
    printf("%f,%f,%f\n",a,b,c);
    return 0;
}
