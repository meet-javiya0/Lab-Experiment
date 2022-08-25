//Write a program to find a character from given string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],c;
    int length;

    printf("Enter a string : ");
    gets(str);

    printf("Enter a character : ");
    scanf("%c",&c);

    length=strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i]==c)
        {
            printf("%c is in %dth character in string\n",str[i],i);
        }   
    }
}