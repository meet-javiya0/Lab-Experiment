//Write a program to find maximum element from 1-Dimensional array

#include<stdio.h>

int main()
{
    int t,max=0;
    printf("How many numbers you want to check? : ");
    scanf("%d",&t);
    int a[t];
    for (int i = 0; i < t; i++)
    {
        printf("Enter %d : ",i+1);
        scanf("%d",&a[i]);
        if(i==0)
        {
            max=a[0];
        }
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    printf("Maximum number is %d",max);

    return 0;
}