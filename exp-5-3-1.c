/*Write a program to print a following pattern
a)
AAAAA
BBBB 
CCC  
DD   
E   */

#include<stdio.h>

int main()
{
    char c='A';
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
}