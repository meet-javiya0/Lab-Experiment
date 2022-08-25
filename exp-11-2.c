/*A file name data contains series of integer numbers Write a C program to read all numbers from file and then
write all odd numbers into file named "odd" and write all even numbers into file named "even". display all
the contents of these file on screen*/

#include<stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    FILE *odd = fopen("odd.txt","w");
    FILE *even = fopen("even.txt","w");
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            fprintf(even,"%d",n);
        }
        else
        {
            fprintf(odd,"%d",n);
        }
    }
    fclose(odd);
    fclose(even);
    return 0;
}

//Not verified