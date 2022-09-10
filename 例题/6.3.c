#include <stdio.h>

int main(void)
{
    int a[10]={34,67,90,43,124,87,65,99,132,26};
    int i,j,tmp;
    printf("original array\n");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for (j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(a[i]>a[i+1])
            {
                tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
            }
        }
    }
    printf("sorted array\n");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}
