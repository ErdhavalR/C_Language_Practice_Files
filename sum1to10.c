#include<stdio.h>

int main()
{
    int i=0,sum=0;
    //--------------------------------------------------------------------
    // While using While Lool We Must Initialize first Number
    while (i<=10) 
    {
        sum=sum+i;
        i++;
    }
    // ---------------------------------------------------------------------
    // FOR Loop
    // for(i=0;i<=10;i++)
    // {
    //     sum=sum+i;
    // }
    // ---------------------------------------------------------------------
    // Do While Loop
    // do
    // {
    //     sum=sum+i;
    //     i++;
    // }while(i<=10);
    printf("Sum Of  First 10 Natural Numbers = %d \n",sum);
    return 0;
}