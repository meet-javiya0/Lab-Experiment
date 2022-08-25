//Write a program to  find out sum of first and last digit of a given number

#include<stdio.h>
#include<math.h>

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    int last = number%10;
    int digit = (int)log10(number);
    int first = number/pow(10,digit);

    printf("%d",first+last);
}