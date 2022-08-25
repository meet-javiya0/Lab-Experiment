// Write a C program to calculate the average , geometric and harmonic mean of n elements in an array

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a[n];
    int s1 = 0,mul=1;
    float s2 = 0;
    printf("Enter %d elements for array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s1 += a[i];
        mul = mul * a[i];
        s2 += (1 / (float)a[i]);
    }
    float avg = s1 / n;
    float gm = sqrt(mul);
    float hm = (float)(n) / s2;

    printf("avg = %f\ngm = %f\nhm = %f\n", avg, gm, hm);
    return 0;
}