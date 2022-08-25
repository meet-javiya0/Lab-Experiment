//Write a program to interchange two numbers

#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping\n");
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);

    return 0;
}