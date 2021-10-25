#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,prime=0;
    printf("Enter The Number - ");
    scanf("%d",&n);
    
    for (i = 2; i <= (n/2); i++)
    {
        if(n%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime==1||n==1)
    {
        printf("Given Number %d is Not A Prime Number. \n",n);
    }
    else
    {
        printf("Given Number %d is A Prime Number. \n",n);
    }
    
}