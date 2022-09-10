#include <stdio.h>

int main(void)
{
    int i;
    for(i=100;i<=200;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
