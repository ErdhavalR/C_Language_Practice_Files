#include<stdio.h>

int main()
{
    /* Prime Numbers Between 1 to N */
    int first,j,end,isprime;
    printf("Enter The First Number - ");
    scanf("%d",&first);
    printf("Enter The Last Number - ");
    scanf("%d",&end);
    printf("All The Prime Numbers From %d To %d are : \n",first,end);
    // Find All Prime Numbers Between First Number To The Last Number.
    for (first; first <= end; first++)
    {
        isprime=1;

        for (j=2;j <=first/2; j++)
        {
            if (first%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
            printf("%d ",first);
        }
    }
    printf("\n");
    return 0;
}
