#include<stdio.h>

int main()
{
    int i=1,sum=0;
    // for(i=1;i<=10;i++)
    // {
    //     sum=sum+i;
    // }
    // while(i<=10)
    // {
    //     sum=sum+i;
    //     i++;
    // }
    do
    {
        sum=sum+i;
        i++;
    } while (i<=10);
    printf("Sum Of First 10 Natural Numbers = %d \n",sum);
    return 0;
}