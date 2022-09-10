#include <stdio.h>

int main(void)
{
    char string[]="This is a test.";
    int word=0,number=0;
    int i;
    for (i=0;string[i]!='\0';i++)
    {
        printf("%c",string[i]);
    }
    printf("\n");
    i=0;
    for (i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ')
        {
            word=0;
        }
        else if(word==0)
        {
            word=1;
            number++;
        }
    }
    printf("The sentence has %d words",number);
    printf("\n");
}
