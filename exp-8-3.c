//write a function to interchange the value of two variables,say x and y using a function

#include<stdio.h>

int swap(int x,int y)
{
    int temp = x;
    x=y;
    y=temp;
    printf("After swapping the value of x and y is %d and %d",x,y);
}

int main()
{
    int x,y,answer;

    printf("Enter x and y : ");
    scanf("%d %d",&x,&y);
    answer=swap(x,y);
    return 0;
}