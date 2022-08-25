#include <stdio.h>

int main()
{
    int start, end, arm;

    printf("Enter starting number : ");
    scanf("%d", &start);

    printf("Enter ending number : ");
    scanf("%d", &end);

    for (int i = start; i < end; i++)
    {
        int temp = i;
        int sum=0;

        while (temp!=0)
        {
            int r = temp%10;
            temp=temp/10;
            sum=sum+(r*r*r);
        }
        if (sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}