#include<stdio.h>
#include<math.h>

int main()
{
    double First,Last,SC=3,Power;
    printf("From Where Do You Want to Start - ");
    scanf("%lf",&First);
    printf("From Where Do You Want to End - ");
    scanf("%lf",&Last);
    while (First<=Last)
    {
        Power=pow(First,SC);
        printf("%lf \n",Power);
        First++;
    }
    return 0;
}