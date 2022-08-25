/* Write a C program to enter a distance into kilometre and convert it in to
    meter,feet,inches and centimeter */

#include<stdio.h>

int main()
{
    int l;
    printf("Enter value in kilometer: ");
    scanf("%d",&l);
    printf("Value in meter : %d\n",l*1000);
    printf("Value in feet : %f\n",l*3280.84);
    printf("Value in inches : %f\n",l*39370.1);
    printf("Value in centimeter : %d\n",l*100000);

    return 0;
}