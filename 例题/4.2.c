#include <stdio.h>

int main(void)
{
    float a,b,tmp;
    scanf("%f",&a);
    scanf("%f",&b);
    if(a>b)
    {
        tmp=a;
        a=b;
        b=a;
    }
    printf("%f,%f",a,b);
}
