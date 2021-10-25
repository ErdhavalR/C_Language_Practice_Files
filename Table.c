#include<stdio.h>

int main()
{
    int n,tab;
    printf("Which Number's Table You Want - ");
    scanf("%d",&n);
    // for(int i=1;i<=10;i++)
    // {
    //     tab = n*i;
    //     printf("%d x %d = %d \n",n,i,tab);
    // }
    int i=1;
    // while (i<=10)
    // {
    //     tab=n*i;
    //     printf("%d x %d = %d \n",n,i,tab);
    //     i++;
    // }
    do
    {
        tab=n*i;
        printf("%d x %d = %d \n",n,i,tab);
        i++;
    } while (i<=10);
    return 0;
}