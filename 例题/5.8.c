#include <stdio.h>

int main(void)
{
    int r1=1,r2=0,r3=0;
    int m=2;
    printf("1:兔子总数为%d\n",m,(r1+r2+r3));
    while(m<=40)
    {
        r3+=r2;
        r2=r1;
        r1=r3;
        printf("%d:兔子总数为%d\n",m,(r1+r2+r3));
        m++;
    }
    return 0;
}
