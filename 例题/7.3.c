#include <stdio.h>

int main(void)
{
    int max(float a,float b);
    float a,b;
    int c;
    scanf("%f,%f",&a,&b);
    c=max(a,b);
    printf("max is %d\n",c);
    return 0;
}

int max(float a,float b)
{
    float z;
    z=a>b?a:b;
    return z;
}
