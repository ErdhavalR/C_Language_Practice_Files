#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,p;
    printf("Enter Value Of Base - ");
    scanf("%lf",&x);
    printf("Enter Value Of Exponential - ");
    scanf("%lf",&y);

    p=pow(x,y);
    printf("Power Value Of Given Number - %lf \n",p);
    return 0;
}