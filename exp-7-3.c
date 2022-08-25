//Write a program to delete a character in given string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],c;
    int length,j;

    printf("Enter a string : ");
    scanf("%s",str);

    fflush(stdin);

    printf("Enter a character you want to delete : ");
    scanf("%c",&c);

    fflush(stdin);

    length=strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i]==c)
        {
            j=i;
            while (j<length)
            {
                str[j]=str[j+1];
                j++;
            }
            i--;
        }
    }
    printf("After deleting the string is : %s",str);
}