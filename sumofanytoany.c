#include<stdio.h>

int main()
{
    int f,l,sum=0;

    printf("Enter First Number - ");
    scanf("%d",&f);
    printf("Enter Last Number - ");
    scanf("%d",&l);
    // for(f=0;f<=l;f++)
    // {
    //     sum=sum+f;
    // }
    // while(f<=l)
    // {
    //     sum=sum+f;
    //     f++;
    // }
    do
    {
        sum=sum+f;
        f++;
    } while (f<=l);
    printf("The Sum Between Given Numbers = %d \n",sum);
    return 0;
}