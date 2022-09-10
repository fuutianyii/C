#include <stdio.h>

int main(void)
{
    char a[15]="I am a student.";
    int i;
    for(i=0;i<15;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
