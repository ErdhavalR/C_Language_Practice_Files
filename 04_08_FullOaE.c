#include<stdio.h>

int main()
{
    char c;
    int start,end,count,counter=0;

    printf("Enter 'O' For Odd Or 'E' For Even Numbers - ");
    scanf("%c",&c);
    if (c=='O'||c=='o')
    {
        printf("How Many Odd Numbers Do You Want - ");
        scanf("%d",&count);
        printf("From Which Number You Want To Start - ");
        scanf("%d",&start);
        printf("Enter The Last Number - ");
        scanf("%d",&end);
        while (start<=end)
        {
            if(start%2!=0&&counter<count)
            {
                printf("%d \n",start);
                counter++;
            }
            start++;
        }
        printf("There Are Total %d Odd Numbers. \n",counter);
    }
    else if (c=='E'||c=='e')
    {
        printf("How Many Even Numbers Do You Want - ");
        scanf("%d",&count);
        printf("From Which Number You Want To Start - ");
        scanf("%d",&start);
        printf("Enter The Last Number - ");
        scanf("%d",&end);
        while (start<=end)
        {
            if(start%2==0&&counter<count)
            {
                printf("%d \n",start);
                counter++;
            }
            start++;
        }
        printf("There Are Total %d Odd Numbers. \n",counter);
    }
    else
    {
        printf("Re Run The Program.\n");
    }
    return 0;
}