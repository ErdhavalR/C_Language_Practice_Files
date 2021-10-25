#include<stdio.h>

int main()
{
    int n,n1,rev=0,rem;
    printf("Enter Any Number - ");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(n1==rev)
    {
        printf("Palindrom");
    }
    else
    {
        printf("Not Palindrom");
    }
    printf("\n");
    return 0;
}