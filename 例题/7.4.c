#include <stdio.h>

int main(void)
{
    float add(float a,float b);
    float a,b,c;
    printf("Please enter two float,like a,b:")
    scanf("%f,%f",&a,&b);
    c=add(a,b);
    printf("sum is %3.1f\n",c);
    return 0;
}
float add(float a,float b)
{
    return a+b;
}
