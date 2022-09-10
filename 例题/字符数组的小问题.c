#include <stdio.h>

int main(void)
{
    char c1[]={'I',' ','a','m',' ','h','a','p','p','y'};
    char c2[]="I am happy";
    int i1=sizeof(c1);
    printf("%d\n",i1);
    printf("%s\n",c1);//c1没有结束符\0因此会莫名输出@
    int i2=sizeof(c2);
    printf("%d\n",i2);
    printf("%s\n",c2);

    char a[5]="Happy";//char a[5]="123456"时会报错
    printf("%d\n",sizeof(a));
    a[6]='*';
    int i;
    printf("%d\n",sizeof(a));
    for(i=0;i<7;i++)
    {
        putchar(a[i]);
    }
    putchar('\n');
    printf("%s\n",a);
    char b[5]={'H','a','p','p','y'};//char a[5]="123456"时会报错
    printf("%d\n",sizeof(b));
    b[5]='*';
    printf("%d\n",sizeof(b));
    for(i=0;i<6;i++)
    {
        putchar(b[i]);

    }   
    putchar('\n');
    printf("%s\n",a);
}
