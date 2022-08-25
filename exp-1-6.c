// Write a program to compute fahrenheit from centigrade (f=c*1.8+32)

#include<stdio.h>

int main()
{
    int centigrade=0;
    printf("Enter the value in centigrade: ");
    scanf("%d",&centigrade);
    float fahrenheit=1.8*centigrade+32;
    printf("Equivalent temprature in fahrenheit is : %f",fahrenheit);

    return 0;
}