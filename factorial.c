#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,fact=1;
    printf("Enter Number - ");
    scanf("%d",&n);
    
    // for(i=1;i<=n;i++)
    // {
    //     fact=fact*i;
    // }
    while (i<=n)
    {
        fact*=i;
        i++;
    }
    printf("%d! = %d \n",n,fact);
    return 0;
}