# include <stdio.h>

int main(void)
{
    int i=1,sum;
    while(i<=100)
    {
        sum+=i++;
    }
    printf("%d\n",sum);
    return 0;
}
