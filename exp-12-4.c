// Write a program to evaluate the series sum = 1-x + x^2/2! + x^3/3! + x^4/4! + ...... + x^9/9!

#include <stdio.h>
#include<math.h>

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return (n * fact(n - 1));
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    float sum = 1;
    for (int i = 2; i <= 9; i++)
    {
        if (i%2==0)
        {
            sum-=pow(n,i-1)/fact(i);
        }
        else
        {
            sum+=pow(n,i-1)/fact(i);
        }
    }
    printf("sum = %f", sum);
    return 0;
}