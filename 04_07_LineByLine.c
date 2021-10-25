#include<stdio.h>
#include<conio.h>

int main()
{
    char i;
    int start,end,count,counter=0;

    printf("Enter 'O' for Odd Or 'E' For Even - ");
    scanf("%c",&i);

    if(i=='O'||i=='o')
    {
        printf("Enter The First Number From Where You Want To Start - ");
        scanf("%d",&start);
        printf("Enter The Last Number Where You Want To Stop - ");
        scanf("%d",&end);
        printf("How Many Odd Numbers You Want ? - ");
        scanf("%d",&count);
        while(start<=end)
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
    else if(i=='E'||i=='e')
    {
        printf("Enter The First Number From Where You Want To Start - ");
        scanf("%d",&start);
        printf("Enter The Last Number Where You Want To Stop - ");
        scanf("%d",&end);
        printf("How Many Even Numbers You Want ? - ");
        scanf("%d",&count);
        while(start<=end)
        {
            if(start%2==0&&counter<count)
            {
                printf("%d \n",start);
                counter++;
            }
            start++;
        }
        printf("There Are Total %d Even Numbers. \n",counter);
    }
    else
    {
        printf("Re Run The Program \n");
    }
    return 0;
}