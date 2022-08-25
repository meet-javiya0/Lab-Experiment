//Write a program to read three numbers from keyboard and find out maximum of this three (nested if else)

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Give three numbers in space between : ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("%d is the maximum of all.",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the maximum of all.",b);
    }
    else if (c>a && c>b)
    {
        printf("%d is the maximum of all.",c);
    }
    return 0;
}