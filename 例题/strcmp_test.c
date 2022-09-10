#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[]="Az";
    char b[]="Ba";
    printf("a=%d\n",a[0]+a[1]);
    printf("b=%d\n",b[0]+b[1]);
    int i;
    for (i=0;i<2;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    i=0;
    for (i=0;i<2;i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    if (strcmp(a,b)== -1)
    {
        printf("a<b");
    }
    else if (strcmp(a,b)== 1)
    {
        printf("a>b");
    }
    else if (strcmp(a,b)== 0)
    {
       printf("a=b");
    }
    printf("\n");
    printf("经过以上判断strcmp是依次判断ascii码，而不是相加再判断\n");
}
