#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c;
    float x1,x2;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%dx²+%dx+(%d)=0\n",a,b,c);
    x1=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    x2=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    printf("x1=%f,x2=%f\n",x1,x2);
}
