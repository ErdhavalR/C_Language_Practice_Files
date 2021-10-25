#include<stdio.h>

int main()
{
    /* Prime Numbers Between 1 to N */
    int i,j,end,isprime;
    printf("Enter The Last Number - ");
    scanf("%d",&end);
    printf("All The Prime Numbers From 1 To %d are : \n",end);
    // Find All Prime Numbers Between First Number To The Last Number.
    for (i=2; i <= end; i++)
    {
        isprime=1;

        for (j=2;j <=i/2; j++)
        {
            if (i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}