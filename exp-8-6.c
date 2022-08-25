//Write a function that will scan a string passed as an argument and convert all lowercase character into their uppercase equivalent

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int uppercase(char s[] )
{
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
    }
}

int main()
{
    char s[20];

    printf("Enter a string : ");
    scanf("%s",s);

    fflush(stdin);

    uppercase(s);
    printf("%s",s);
}