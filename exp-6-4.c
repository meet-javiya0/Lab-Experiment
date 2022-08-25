//Write a program to sort given array in ascending order

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for (int i = 0; i < t; i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < t-1; i++)
    {
        for (int j = i+1; j < t; j++)
        {
            if (a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}