//Write a program to replace a character in given string

#include<stdio.h>
#include<string.h>

int main()
{
    int length;
    char str[20],c,d;

    printf("Enter a string : ");
    scanf("%s",str);

    fflush(stdin);

    printf("Enter a character : ");
    scanf("%c",&c);

    fflush(stdin);

    printf("Enter a character : ");
    scanf("%c",&d);

    fflush(stdin);

    length=strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i]==c)
        {
            str[i]=d;
        }
    }
    printf("After replacement string is : %s",str);

    return 0;
}