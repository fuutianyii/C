#include <stdio.h>

int main(void)
{
    char ch;
    scanf("%c",&ch);
    if(ch<='Z' && ch>='A')
    {
        printf("%c\n",(ch+32));
    }
    else
    {
        printf("%c\n",ch);
    }
    return 0;
}
