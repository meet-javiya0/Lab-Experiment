// Write a C program to read marks from keyboard your program should display equivalent grade according to following table(if else ladder)
// Marks      Grade
// 100-80   Distinction
// 79-60    First Class
// 59-40    Second Class
//  <40        Fail

#include<stdio.h>

int main()
{
    int marks;
    printf("Please enter marks : ");
    scanf("%d",&marks);

    if (marks>=80 && marks<=100)
    {
        printf("Your grade is Distinction.");
    }
    else if (marks>=60 && marks<=79)
    {
        printf("Your grade is First Class.");
    }
    else if (marks>=40 && marks<=59)
    {
        printf("Your grade is Second Class.");
    }
    else if (marks<40 && marks>=0)
    {
        printf("Sorry you are failed,better luck next time.");
    }
    else
    {
        printf("Invalid marks,please enter valid marks.");
    }
    return 0;
}