//Write a C program to evaluate F(x) = x - x^3/3! + x^5/5! - x^7/7! + ...... x^n/n!

#include<stdio.h>
#include<math.h>

int fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return (n*fact(n-1));
}

int main()
{
    int x,n;
    printf("Enter a and b : ");
    scanf("%d %d",&x,&n);
    float s=0;
    int j=1;
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            s+=pow(x,j)/fact(j);
        }
        else
        {
            s-=pow(x,j)/fact(j);
        }
        j+=2;
    }
    printf("sum = %f",s);
    return 0;
}