#include <stdio.h>

int main(void)
{
    char c;
    c=getchar();
    while(c!='\n')
    {
        if(('a'<=c&c<='z')||('A'<=c&c<='Z'))
        {
            if((c>'W'&c<='Z')||(c>'w'&c<='z'))
            {
                c=c-22;
            }
            else
            {
                c=c+4;
            }
        }
        putchar(c);
        c=getchar();
    }
    printf("\n");
}
