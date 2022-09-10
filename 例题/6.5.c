#include <stdio.h>

int main(void)
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{-10,10,-5,2}};
    int i,j;
    int maxa=0,maxb=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(a[maxa][maxb]<a[i][j])
            {
                maxa=i;
                maxb=j;
            }
        }
    }
    printf("max:%d\n",a[maxa][maxb]);
}
