//Write a program to read stucture elements from keyboard

#include<stdio.h>

struct student
{
    char name[50];
    int roll_no;
    float marks;
}s1;

int main()
{
    printf("Enter the name of the student : ");
    scanf("%s",s1.name);

    fflush(stdin);

    printf("Enter the roll number of student : ");
    scanf("%d",&s1.roll_no);

    fflush(stdin);

    printf("Enter marks of the student : ");
    scanf("%f",&s1.marks);

    printf("%s %d %f",s1.name,s1.roll_no,s1.marks);
}