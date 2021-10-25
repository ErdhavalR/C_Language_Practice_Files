#include<stdio.h>
#include<conio.h>

int main()
{
    int first,last,sum=0;
    printf("Enter First Number - ");
    scanf("%d",&first);
    printf("Enter Last Number - ");
    scanf("%d",&last);
    while (first<=last)
    {
        if(first%2!=0)
        {
            printf("%d ",first);
            sum=sum+first;
        }
        first++;
    }
    printf("\n");
    printf("Sum Of Given Odd Numbers = %d \n",sum);
    return 0;
}