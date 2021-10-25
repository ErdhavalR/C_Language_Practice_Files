#include <stdio.h>

int main()
{
    int start, end, count = 0;
    printf("Enter Number From You Want to Start Printing - ");
    scanf("%d", &start);
    printf("Enter The Last Number Where You Want to End - ");
    scanf("%d", &end);
    printf("You Are Starting From %d.\n", start);

    while (start <= end && count < 100)
    {
        if (start % 2 == 0)
        {
            printf("%d \n", start);
            count++;
        }
        start++;
    }
    printf("The Number of Odd Number is %d. \n", count);

    return 0;
}