//Write a program to calculate average and total of 5 students for 3 subjects(use nested for loop)

#include<stdio.h>

int main()
{
    int marks=0;
    float total=0,avg;

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter details of student %d : \n",i);
        total=0;

        for (int j = 1; j <=3; j++)
        {
            printf("Enter marks %d : ",j);
            scanf("%d",&marks);
            total=total+marks;
        }
        avg=total/3.0;
        printf("Total=%f,Avg=%f\n",total,avg);
    }
}