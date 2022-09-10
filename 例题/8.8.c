#include <stdio.h>

int main()
{
    void inv(int x[],int n);
    int i,a[10]={3,7,9,11,0,6,7,5,4,2},*p;
    printf("The original array\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    p=a;
    printf("\n");
    inv(a,10);
    printf("The array has been inverted:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    return 0;
}
void inv(int x[],int n)
{
    int *temp,i,m=(n-1)/2;
    int *p;
    p=x;
    for(i=0;i<=m;i++)
    {
        *temp=*(p+i);
        *(p+i)=*(p+((n-1)-i));
        *(p+((n-1)-i))=*(temp);
    }
}
