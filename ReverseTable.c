#include<stdio.h>

int main()
{
    int n,i,tab;
    printf("Which Number's Table You Want - ");
    scanf("%d",&n);
    // for(int i=10;i>=1;i--)
    // {
    //     tab = n*i;
    //     printf("%d x %d = %d \n",n,i,tab);
    // }
    // while (i>=1)
    // {
    //     if (i<=10)
    //     {
    //         tab=n*i;
    //         printf("%d x %d = %d \n",n,i,tab);
    //     }
    //     i--;
    // }
    do
    {
        if(i<=10)
        {
            tab=n*i;
            printf("%d x %d = %d \n",n,i,tab);
        }
        i--;
    } while (i>=1);
    return 0;
}