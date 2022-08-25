//Write a function in the program to return 1 if number is prime otherwise return 0

#include<stdio.h>

int IsPrime(int n)
{
    int flag=1;
    for (int i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n,result;

    printf("Enter a number : ");
    scanf("%d",&n);
    result=IsPrime(n);

    if (result==1)
    {
        printf("PRIME");
    }
    else
    {
        printf("NON PRIME");
    }
}