//Write a C program to print the address of character and the character of string using a pointer.

#include<stdio.h>

int main()
{
    char c,str[10],*ptr_char,*ptr_string;
    printf("Enter a charater : ");
    scanf("%c",&c);
    ptr_char=&c;
    fflush(stdin);

    printf("Enter a string : ");
    scanf("%s",&str);
    ptr_string=str;
    fflush(stdin);

    printf("Address of the character is %u and the string is %u",ptr_char,ptr_string);
    return 0;
}