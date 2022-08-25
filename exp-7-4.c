//Write a program to reverse a string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];

    printf("Enter a string : ");
    scanf("%s",str);
    
    strrev(str);

    printf("After reversing the string is : %s",str);

    return 0;
}