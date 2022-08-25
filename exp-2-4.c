// Write a C program to check whether the entered character is capital,small letter , digit or any specific character

#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);

    if (c>='A' && c<='Z')
    {
        printf("Entered character is capital letter.");
    }
    else if (c>='a' && c<='z')
    {
        printf("Entered character is small letter.");
    }
    else if (c>='0' && c<='9')
    {
        printf("Entered character is digit.");
    }
    else
    {
        printf("Entered character is special character.");
    }
    return 0;
}