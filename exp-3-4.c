//Write a C program to find factorial of a given number

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number you want to check : ");
    scanf("%d",&n);

    if (n<0)
    {
        printf("Enter a number greater or equal to 0.");
    }
    else if (n>0)
    {
        int fact=1;
        for (int i = 1; i<=n; i++)
        {
            fact = fact * i;
        }
        printf("%d",fact);
    }
    else
    {
        printf("1");
    }
}