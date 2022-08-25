//Write a program to generate first n number of Fibonacci series

#include<stdio.h>

int main()
{
    int a,b,number;
    a=1;
    b=1;
    printf("Enter the number : ");
    scanf("%d",&number);

    if (number>2)
    {
        printf("%d %d ",a,b);
        for (int i = 2; i < number; i++)
        {
            int c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
    else if (number==2)
    {
        printf("%d %d ",a,b);
    }
    else if (number==1)
    {
        printf(" %d ",a);
    }
    else
    {
        printf("Enter a valid input.");
    }
}