//Design a structure student_record to contain name ,branch, and total marks obtained.
//Develop a program to read data for 10 students in a class and print them.

#include<stdio.h>

struct student
{
    char name[20];
    char branch[20];
    float marks;
}s[3];

int main()
{
    for (int i = 0; i < 4; i++)
    {
        printf("Enter details of student %d :\n",i+1);

        printf("Enter the name : ");
        scanf("%s",s[i].name);
        fflush(stdin);

        printf("Enter the branch : ");
        scanf("%s",s[i].branch);
        fflush(stdin);

        printf("Enter the marks : ");
        scanf("%f",&s[i].marks);
    }

    printf("  Name  |  Branch  |  Marks  \n");

    for (int i = 0; i < 4; i++)
    {
        printf("%4s %10s %11f\n",s[i].name,s[i].branch,s[i].marks);
    }
    return 0;
}