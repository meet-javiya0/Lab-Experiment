//Write a C program to print the address of character and the character of string using a pointer.

#include<stdio.h>

void find(int *a,int n)
{
    for (int i = 0; i < 10; i++)
    {
        if (*(a+i)==n)
        {
            printf("Element found\n");
            return;
        }
    }
    printf("No match found\n");
    return;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9},n;
    printf("Enter the number to find : ");
    scanf("%d",&n);
    find(arr,n);
    return 0;
}