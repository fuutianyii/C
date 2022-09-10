#include <stdio.h>
#include <math.h>


int main(void)
{
    int a,b,c;
    double x1,x2;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((b*b-4*a*c)>=0)
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("x1=%f\r\nx2=%f\r\n",x1,x2); 
    }
    else
    {
        printf("此方程无实根");
    }
}
