/* Write a C program to find the sum and average of different number which are accepted 
    by user as many as wants*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,count=0;
    float total=0,avg;
    char c;

    do
    {
        printf("Enter a value : ");
        scanf("%d",&n);
        count++;
        total= total+n;
        printf("Do yoy want to continue(y or n)? : ");
        c=getche();
        printf("\n");
    } while (c=='y');
    avg=total/count;
    printf("Total=%f\nAverage=%f",total,avg);
    return 0;
}