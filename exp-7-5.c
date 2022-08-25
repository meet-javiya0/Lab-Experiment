//Write a program to convert string into upper case

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];

    printf("Enter the string : ");
    scanf("%s",str);

    strupr(str);

    printf("After converting the string is : %s",str);
    return 0;
}