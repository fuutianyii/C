#include <stdio.h>

int main(void)
{
    void sort(int array[],int n);
    printf("enter array:\n");
    int array[]={45,2,9,0,-3,54,12,5,66,33};
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    printf("Thr sorted array:\n");
    sort(array,10);
    for (i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void sort(int array[],int n)
{
    int min,num=0,i,l,tmp;
    for(i=0;i<n;i++)
    {
        for(l=i;l<10;l++)
        {
            if(array[i]>array[l])
            {
                tmp=array[i];
                array[i]=array[l];
                array[l]=tmp;
            }
        }
    }
}
