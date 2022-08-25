// Write a program to evaluate the series  1 + 1/2 + 1/3 + 1/4 + ...... + 1/n

#include <stdio.h>

float ans(float n)
{
    if (n <= 1)
    {
        return 1;
    }
    return ((1 / n) + ans(n - 1));
}

int main()
{
    float n;
    printf("Enter a number : ");
    scanf("%f", &n);
    float sum = ans(n);
    printf("sum = %f", sum);
    return 0;
}