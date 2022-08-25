//Define a structure type struct personal that would contain person name,date of joining and salary using this structure to read this information of 5 people and print the same on screen

#include<stdio.h>

struct personal
{
    char person_name[20];
    char date_of_joining[10];
    int salary;
}p[5];

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of person %d\n",i+1);

        printf("Enter the name : ");
        scanf("%s",p[i].person_name);

        printf("Enter the date_of_joining : ");
        scanf("%s",p[i].date_of_joining);

        printf("Enter the salary : ");
        scanf("%d",&p[i].salary);
    }
    
    printf("Person name | Date of joining | Salary\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%-14s %-17s %-7d\n",p[i].person_name,p[i].date_of_joining,p[i].salary);
    }
}