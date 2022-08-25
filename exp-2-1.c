//Write a C program to find that the accepted number is Negative or Positive or Zero

#include<stdio.h>

int main()
{
    float in;
    printf("Please give a numerical input : ");
    scanf("%f",&in);
    
    if (in>0)
    {
        printf("The input is Positive.");
    }
    else if (in<0)
    {
        printf("The input is Negative.");
    }
    else if (in == 0)
    {
        printf("The input is Zero.");
    }
    else
    {
        printf("Invalid Input.");
    }
    return 0;
}