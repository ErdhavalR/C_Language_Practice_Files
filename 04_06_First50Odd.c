#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter The Number From Where You Want to Start - ");
    scanf("%d",&start);
    printf("Enter The Number From Where You Want to End - ");
    scanf("%d",&end);

    printf("You Are Staring From %d \n",start);
    
    while(start<=end)
    {
        if(start%2!=0)
        {
            printf("%d is a Odd Number. \n",start); 
        }
        start++;
    }
    return 0;
}