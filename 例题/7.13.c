#include <stdio.h>

int main(void)
{
    int max_value(int array[][4]);
    int array[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};
    printf("Max value is %d\n",max_value(array));
    return 0;
}

int max_value(int array[][4])
{
    int max,i,t;
    max=array[0][0];
    for(i=0;i<3;i++)
    {
        for(t=0;t<4;t++)
        {
            if(max<array[i][t])
            {
                max=array[i][t];
            }
        }
    }
    return max;
}
