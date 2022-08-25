//Write a program to check whether the given number is prime or not

#include<stdio.h>

int main()
{
    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            printf("%d is not prime",num);
            break;
        }
        if (num==(i+1))
        {
            printf("%d is prime",num);
            break;
        }
    }
}