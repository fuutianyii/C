#include <stdio.h>

int main(void)
{
    void hanoi(int n,char x,char xx,char xxx);
    hanoi(3,'A','B','C');
}

void hanoi(int n,char x,char xx,char xxx)
{
    void move(char a,char b);
    void hanoi(int n,char x,char xx,char xxx);
    if(n==1)
    {
        move(x,xxx);
    }
    else
    {
        hanoi(n-1,x,xxx,xx);
        move(x,xxx);
        hanoi(n-1,xx,x,xxx);
    }
}

void move(char a,char b)
{
    printf("%c -> %c\n",a,b);
}
