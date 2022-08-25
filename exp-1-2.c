//Write a program to find area of triangle(a=h*b*.5)
//a=area,h=height,b=base

#include<stdio.h>

int main()
{
    float base,height,area;
    printf("Enter value of base: ");
    scanf("%f",&base);
    printf("Enter value of height: ");
    scanf("%f",&height);
    area=(base*height)*0.5;
    printf("Area of the triangle is: %f",area);

    return 0;
}