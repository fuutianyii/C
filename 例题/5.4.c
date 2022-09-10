#include <stdio.h>

int main(void)
{
    int amount,nums,sum;
    for(nums=1;nums<=1000;nums++)
    {
        printf("input you give amount:");
        scanf("%d",&amount);
        sum+=amount;
        if (amount>=100000)  //金额数:amount
        {
            break;
        }
    }
    printf("The sum is %d\n",sum);
    return 0;
}
