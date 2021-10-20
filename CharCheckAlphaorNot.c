#include <stdio.h>
int main()
{
    char c;

    printf("Enter The Character You Want to Check ");
    scanf("%c", &c);

    if (c='a')
    {
        printf("Entered Character %c is an Alphabet. \n", c);
    }
    else
    {
        printf("Entered Character %c is Not an Alphabet. \n", c);
    }
    
    return 0;
}