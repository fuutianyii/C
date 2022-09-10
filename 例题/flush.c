#include <stdio.h>

int main(void)
{
    char string[5];
    char s;
    int i;
    int standard=1;//用于存储是否输入5个有效的字符（有效字符不包括换行符）
    for (i=0;i<=4;i++)
        {
            s=getchar();
            if (s=='\n')
            {
                standard=0;//存在异常，未输出5个有效字符
                break;//跳出循环，进行异常处理
            }
            string[i] = s;
        }
    while (i<5)//将空余的内存写入空字符，否则会输出乱码
    {
        string[i]='\0';
        i++;
    }
    for (i=0;i<=4;i++)
    {
        putchar(string[i]);
    }
    if(standard!=0){//当无异常时，进行内存清除
        while(getchar()!='\n');
    }
    printf("\n");
}
