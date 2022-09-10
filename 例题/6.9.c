#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j;
    char string[3][20];
    char str[20];
    for(i=0;i<3;i++)
    {
        gets(string[i]);
    }
    if(strcmp(string[0],string[1])==1)
    {
        strcpy(str,string[0]);
    }
    else
    {
        strcpy(str,string[0]);
    }
    if(strcmp(string[2],str)==1)
    {
        strcpy(str,string[2]);
    }
    printf("the largest is %s",str);
    return 0;

}
