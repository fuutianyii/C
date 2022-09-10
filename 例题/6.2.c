#include <stdio.h>

int main(void)
{
    int tmp,rabbit[3]={1,0,0};
    int i=1;
    printf("1\n");
    for(i=1;i<=40;i++)
    {
        tmp=rabbit[1];
        rabbit[1]=rabbit[0];
        rabbit[2]=rabbit[2]+tmp;
        rabbit[0]=rabbit[2];
        printf("%d\n",rabbit[0]+rabbit[1]+rabbit[2]);
    }
}
