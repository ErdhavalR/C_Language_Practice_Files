#include<stdio.h>

int main()
{
    float i,sum=0,avg;
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        avg=sum/10;
    }
    printf("The Sum Between 1 to 10 = %f and Average = %f \n",sum,avg);
    return 0;
}