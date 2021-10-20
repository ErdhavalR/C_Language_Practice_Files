# include<stdio.h>
int main()
{
    int a=30;   int b=20;   int c=10;
    int sum=a+b+c;
    int sub=a-b-c;
    int mul=a*b*c;
    int div=mul/a;
    // The Addition
    printf("The Addition Of Given Numbers Sum=%d \n", sum);
    // The Subtraction
    printf("The Subtraction Of Given Numbers Sub=%d \n", sub);
    // The Multiplication
    printf("The Multiplication Of Given Numbers Mul=%d \n", mul);
    // The Division
    printf("The Division Of Given Numbers Div=%d \n", div);
    printf("Now We will use Float as a datatype to Perform Arithmetic Operations \n");

    float d=60.60;  float e=45.45;  float f=15.15;
    float sumf=d+e+f;
    float subf=d-e-f;
    float mulf=d*e*f;
    float divf=mulf/e;

    // The Addition
    printf("The Addition Of Given Numbers Sum=%f \n", sumf);
    // The Subtraction
    printf("The Subtraction Of Given Numbers Sub=%f \n", subf);
    // The Multiplication
    printf("The Multiplication Of Given Numbers Mul=%f \n", mulf);
    // The Division
    printf("The Division Of Given Numbers Div=%f \n", divf);
    printf("The Programme is Over");
}