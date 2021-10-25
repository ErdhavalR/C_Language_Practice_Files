#include<stdio.h>

int main()
{
    char c;
    int start,count,counter=0;
    printf("Enter 'O' For Odd or 'E' For Even - ");
    scanf("%c",&c);
    if (c=='O'||c=='o')
    {
        printf("Enter Total Number of Odd Numbers You Want - ");
        scanf("%d",&count);
        printf("From Which Number You Want To Start - ");
        scanf("%d",&start);
        while(start<=count)
        {
            if(start%2!=0&&counter<count)
            {
                printf("%d \n",start);
                count++;
            }
            start++;
        }
    }
    else if (c=='E'||c=='e')
    {
        printf("Enter Total Number of Even Numbers You Want - ");
        scanf("%d",&count);
        printf("From Which Number You Want To Start - ");
        scanf("%d",&start);
        while(start<=count)
        {
            if(start%2==0)
            {
                printf("%d \n",start);
                count++;
            }
            start++;
        }
    }
    else
    {
        printf("Re Run The Code. \n");
    }
    return 0;
}