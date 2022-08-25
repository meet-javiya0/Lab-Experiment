//Write a program to reverse a number

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);

    int reverse=0;
    while (n!=0)
    {
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    printf("%d",reverse);
}