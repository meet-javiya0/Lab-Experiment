//Write a program to read marks of a student from keyboard whether the student is pass or fail (using if else)

#include<stdio.h>

int main()
{
    int marks;
    printf("Please enter marks from 100 : ");
    scanf("%d",&marks);

    if (marks>=33 && marks<=100)
    {
        printf("Pass");
    }
    else if (marks<33 && marks>=0)
    {
        printf("Fail");
    }
    else
    {
        printf("Enter the valid marks.");
    }
    return 0;
}