//Write a program that defines a function to add first n numbers

#include<stdio.h>

int sum(int n)
{
    int sum=0;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    
    return sum;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    printf("The sum of n numbers is %d",sum(n));

    return 0;
}