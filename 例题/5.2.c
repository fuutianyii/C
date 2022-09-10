#include <stdio.h>

int main(void)
{
    int i=1,sum;
    do
    {
        sum+=i++;
    }while(i<=100);
    printf("%d\n",sum);
    return 0;
}
