#include <stdio.h>

float Max=0,Min=0;
int main(void)
{
    float average(float array[],int n);
    float ave,score[10]={89,95,87.5,100,67.5,97,59,84,73,90};
    int i;
    printf("Please enter 10 scores:\n");
    for (i=0;i<10;i++)
    {
        printf("%3.1f ",score[i]);
    }
    printf("\n");
    printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n",Max,Min,average(score,10));
    return 0;
}


float average(float array[],int n)
{
    int i;
    float sum;
    Max=Min=array[0];
    for(i=0;i<n;i++)
    {
        if(Min>array[i])
        {
            Min=array[i];
        }
        if(Max<array[i])
        {
            Max=array[i];
        }
        sum+=array[i];
    }
    return sum/10;
}
