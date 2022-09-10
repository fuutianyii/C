#include <stdio.h>

int main(void)
{
    int x,y;
    for (x=1;x<=4;x++)
    {
        for (y=1;y<=5;y++)
        {
            printf("%d\t",x*y);
        }
        printf("\n");
    }
}
