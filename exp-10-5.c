//Write a program for sorting using pointer

#include<stdio.h>

void sort(int *a)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10-i; j++)
        {
            if (*(a+j-1)>*(a+j))
            {
                int temp=*(a+j-1);
                *(a+j-1)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    return;
}

int main()
{
    int n,arr[10];
    printf("Enter 10 numbers to sort : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&n);
        arr[i]=n;
        fflush(stdin);
    }
    sort(arr);
    printf("Sorted : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}