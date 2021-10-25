#include<stdio.h>

int main()
{
    int i,n,tab,sum=0;
    printf("Which Number's Table You Want - ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        tab=n*i;
        printf("%d x %d = %d \n",n,i,tab);
        if(i<=8)
        {
            sum=sum+tab;
        }
    }
    printf("%d \n",sum);
    return 0;
}