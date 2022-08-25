//Write a C program to input an integer number and vheck the last digit of number is even or odd

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("The last digit of the number is even.");
    }
    else
    {
        printf("The last digit of the number is odd.");
    }
}