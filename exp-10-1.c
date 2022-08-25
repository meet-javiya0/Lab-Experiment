//Write a program to print address of variable using pointer.

#include<stdio.h>

void main()
{
    int a, *p;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    p = &a;
    printf("Value = %d, Address = %u \n",a, &a);
    printf("Value = %d, Address = %u",*p, p);
}