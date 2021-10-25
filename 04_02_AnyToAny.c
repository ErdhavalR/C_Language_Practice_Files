#include <stdio.h>

int main()
{
    int start, end;
    printf("Enter Number From You Want to Start Printing - ");
    scanf("%d", &start);
    printf("Enter The Last Number Where You Want to End - ");
    scanf("%d", &end);
    printf("You Are Starting From %d.\n", start);

    while (start <= end)
    {
        printf("%d \n", start);
        start++;
    }

    return 0;
}