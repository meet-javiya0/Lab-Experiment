//Define structure data type called time_struct containing three number's integer hour and integers minute and integer second
//Develop a program that would assign values to the individual number and display the time in the following format: 16:40:51

#include<stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
}t;

int main()
{
    printf("Enter time in hour : ");
    scanf("%d",&t.hour);

    printf("Enter time in minute : ");
    scanf("%d",&t.minute);

    printf("Enter time in second : ");
    scanf("%d",&t.second);

    printf("%d:%d:%d",t.hour,t.minute,t.second);
}