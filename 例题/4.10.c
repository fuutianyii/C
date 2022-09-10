#include <stdio.h>

int main(void)
{
    float w,p,s,d,f;
    printf("运费:");
    scanf("%f",&p);
    printf("重量:");
    scanf("%f",&w);
    printf("距离:");
    scanf("%f",&s);
    f=w*p*s;
    printf("原价格:%f\n",f);
    int tmp;
    if(s>=3000)
    {
        f=f*(1-0.15);
    }
    else
    {
        tmp=s/250;   
        switch(tmp)
        {
            case 1:f=f*(1-0.02);break;
            case 2:
            case 3:f=f*(1-0.05);break;
            case 4:
            case 5:
            case 6:
            case 7:f=f*(1-0.08);break;
            case 8:
            case 9:
            case 10:
            case 11:f=f*(1-0.10);break;
        }        
    }
    printf("折扣后的价格为%f\n",f);
}
