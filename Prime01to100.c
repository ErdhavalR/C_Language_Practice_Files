#include<stdio.h>
int main()
{
    int first,last,prime;
    // printf("Enter First Number - ");
    // scanf("%d",&first);
    // printf("Enter Last Number - ");
    // scanf("%d",&last);

    printf("Prime Numbers Between 01 To 100 are \n");

    for(first=2;first<=100;first++)
    {
        prime=0;
        for(last=2;last<=(first/2);last++)
        {
            if (first%last==0)
            {
                prime++;
                break;
            }
        }
        if(prime==0)
        {
            printf("%d ",first);
        }
    }
    printf("\n");
    return 0;
}