#include<stdio.h>
int main()
{
    int num;
    printf("Enter The Number From Where You Want to Start - ");
    scanf("%d",&num);
    printf("You Are Staring From %d \n",num);
    while(num<=100)
    {
        if(num%2!=0)
        {
            printf("%d is a Odd Number. \n",num); 
        }
        num++;
    }
    return 0;
}