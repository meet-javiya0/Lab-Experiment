//Write a program to find factorial of a number using recursion

#include<stdio.h>

int fact(int n)
{
    int factorial;
    if (n==1)
    {
        return 1;
    }
    factorial=n*fact(n-1);

    return factorial;
}

int main()
{
    int n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("The factorial of %d is %d",n,fact(n));
}