//Read five person height and weight and count the number of person having height greater than 170 and weight less than 50

#include<stdio.h>

int main()
{
    int h,w,count=0;

    for (int i = 1; i < 5; i++)
    {
        printf("Enter details of the person : %d\n",i);
        printf("Enter your height : ");
        scanf("%d",&h);
        printf("Enter your weight : ");
        scanf("%d",&w);
        if (h>170)
        {
            if (w<50)
            {
                count++;
            }   
        }
    }
    printf("Total person having height>170 and weight<50 is %d",count);
}