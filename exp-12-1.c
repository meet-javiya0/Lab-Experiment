//Write a program to evaluate the series  1^2 + 2^2 + 3^2 + ...... + n^2

#include<stdio.h>

int ans(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return ((n*n)+ans(n-1));
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = ans(n);
    printf("sum = %d",sum);
    return 0;
}