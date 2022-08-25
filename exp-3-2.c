//Write a program to find out the Maximum and Minimum number from given 10 numbers.

#include<stdio.h>

int main()
{
    int number = 0,max = 0,min = 0;
    printf("Enter ten integers: ");

    if (1)
    {
        scanf("%d",&number);
        max=number;
        min=number;
    }
    for (int i = 0; i < 9; i++)
    {
        scanf("%d",&number);
        if (number>max)
        {
            max=number;
        }
        if (number<min)
        {
            min=number;
        }   
    }
    printf("The maximum number entered is %d\n",max);
    printf("The minimum number entered is %d\n",min);
}