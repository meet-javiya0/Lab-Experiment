//Write a C program to swap the two values using pointers.

#include<stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    
    swap(&a,&b);
    printf("After swapping the value of a and b is %d and %d",a,b);
    return 0;
}