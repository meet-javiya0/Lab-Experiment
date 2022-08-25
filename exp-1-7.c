//Write a C program to find out distance travelled by the equation (d=(u*t)+(0.5*a*t*t))

#include<stdio.h>

int main()
{
    int u,a,t;
    printf("Enter initial speed in Km/h : ");
    scanf("%d",&u);
    printf("Enter time in hours : ");
    scanf("%d",&t);
    printf("Enter acceleration in Km/h^2 : ");
    scanf("%d",&a);
    float d=(u*t)+(0.5*a*t*t);
    printf("Distance travelled in Km : %f\n",d);
}