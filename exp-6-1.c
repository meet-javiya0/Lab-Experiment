//Write a C program to read and store the roll number and marks of 20 students using array

#include<stdio.h>

int main()
{
    int a[20],b[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter the roll number and marks of student %d: \n",i+1);
        printf("Roll number: ");
        scanf("%d",&a[i]);
        printf("Marks: ");
        scanf("%d",&b[i]);
    }
    printf("Roll number | Marks\n");
    for (int i = 0; i < 20; i++)
    {
        printf("   %d     %d \n",a[i],b[i]);
    }
    return 0;
}