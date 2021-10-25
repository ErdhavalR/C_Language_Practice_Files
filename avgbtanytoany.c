#include<stdio.h>

int main()
{
    float i,f,l,sum=0,avg;
    printf("Enter The first number - ");
    scanf("%f",&f);
    printf("Enter The last Number - ");
    scanf("%f",&l);
    i=f;
    while (f<=l)
    {
        sum=sum+f;
        f++;
    }
    avg=sum/l;
    printf("The Sum Between Given Numbers %f & %f = %f and Average = %f \n",i,l,sum,avg);
    
    return 0;
