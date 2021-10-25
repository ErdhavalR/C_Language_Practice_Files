#include<stdio.h>

int main()
{
    int first,last,sum=0;
    printf("Enter The First Number - ");
    scanf("%d",&first);
    printf("Enter The Last Number - ");
    scanf("%d",&last);
    while(first<=last)
    {
        if(first%2==0)
        {
            printf("%d \n",first);
            sum=sum+first;
        }
        first++;
    }
    printf("\n");
    printf("Sum Of All Given Even Numbers = %d \n",sum);
    return 0;
}