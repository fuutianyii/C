#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c,disc;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    disc=b*b-4*a*c;
    if (fabs(a)==0)
    {
        printf("Is not a quadratic\n");
    }
    else if(disc == 0)
    {
        printf("The equation has two qeual roots: %8.4f\n",(-b/(2*a)));
    }
    else if(disc > 0)
    {
        printf("The equation has distinct real roots:%8.4f and %8.4f\n",((-b-sqrt(disc))/(2*a)),((-b+sqrt(disc))/(2*a)));
    }
    else if(disc < 0)
    {
        printf("The equation has complex roots:\n%8.4f+ %8.4fi",-b/(2*a),sqrt(-disc)/(2*a));
        printf("\n%8.4f- %8.4fi\n",-b/(2*a),sqrt(-disc)/(2*a));
    } 
    return 0;
}
