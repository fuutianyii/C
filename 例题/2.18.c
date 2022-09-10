#include <stdio.h>

int main(void)
{
    int i,t;
    t=1;
    i=2;
    while(i<=5)
    {
        t*=i;
        i+=1;    
    }       
    printf("%d\n",t);
    return 0;
}
