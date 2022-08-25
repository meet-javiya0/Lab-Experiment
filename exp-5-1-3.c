/*Write a program to print a following pattern
c)
55555
4444 
333  
22   
1   */

#include<stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}