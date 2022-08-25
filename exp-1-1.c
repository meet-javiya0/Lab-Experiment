//write a program to that perform as calculator (addition,multiplication,division,substarction)

#include<stdio.h>

int main()
{
    int a,b;
    float ans;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    ans=a+b;
    printf("a + b = %f\n",ans);
    ans=a-b;
    printf("a - b = %f\n",ans);
    ans=a*b;
    printf("a * b = %f\n",ans);
    ans=(float)a/b;
    printf("a / b = %f\n",ans);

    return 0;
}