#include <stdio.h>
#include "7.19_file2.c"

int A;
int main()
{
    int power(int n);
    int b=3,c,d,m;
    printf("Enter the number a and its power m:\n");
    scanf("%d,%d",&A,&m);
    c=A*b;
    printf("%d*%d=%d",A,b,c);
    d=power(m);
    printf("%d * * %d =%d\n",A,m,d);
    return 0;   
}

