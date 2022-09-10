#include <stdio.h>

int main()
{
    float add(float x,float y);
    float average(float a[10],int n);
    float a[10],sum;
    int i;
    printf("enter 10 integer numbers:");
    for (i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("The average is %4.2f.\n",average(a,10));
}

float average(float a[10],int n)
{
    float add(float a,float b);
    int i;
    float sum;
    for (i=0;i<10;i++)
    {
        sum=add(sum,a[i]);
    }
    return sum/n;
}

float add(float a,float b)
{
    return a+b;
}
