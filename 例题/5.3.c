#include <stdio.h>

int main(void)
{
    int i=11,sum=0;
    printf("int=11\n");
    while (i<=10)
    {
        sum+=i++;
    }
    printf("while:%d\n",sum);

    i=11,sum=0;
    do
    {
        sum+=i++;
   }while(i<=10);
    printf("do-while:%d\n",sum);

    printf("int=1\n");
    i=1;sum=0;
    while (i<=10)
    {
        sum+=i++;
    }
    printf("while:%d\n",sum);

    i=1,sum=0;
    do
    {
        sum+=i++;
   }while(i<=10);
    printf("do-while:%d\n",sum);
    return 0;
}
