#include <stdio.h>

int main()
{
    float add(float x,float y);
    float a[10],sum,average;
    int i;
    printf("enter 10 integer numbers:");
    for (i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        sum=add(sum,a[i]);
    }
    average=sum/10;
    printf("The sum is %4.2f\n",sum);
    printf("The average is %4.2f.\n",average);
}

float add(float x,float y)
{
    return x+y;
}
