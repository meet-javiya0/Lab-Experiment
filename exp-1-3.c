/* Write a program to calculate simple interest i=(p*r*n)/100
    i=simple interest
    p=principal amount
    r=rate of interest
    n=number of years */

#include<stdio.h>

int main()
{
    float i,p,r,n;
    printf("Enter principal amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter number of years: ");
    scanf("%f",&n);
    i=(p*r*n)/100;
    printf("Amount of simple interest is: %f",i);

    return 0;
}