#include <stdio.h>

int main(void)
{
    int max();
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    extern int A,B,C;
    printf("Please enter three integer numbers:");
    scanf("%d %d %d",&A,&B,&C);
    printf("max is %d\n",max());
    return 0;
}
int A,B,C;

int max()
{
    int m;
    m=A>B?A:B;
    m=m>C?m:C;
    return m;
}
