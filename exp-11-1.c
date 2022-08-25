//Write a program to write a string in file

#include<stdio.h>\
#include<stdlib.h>

int main()
{
    FILE *ptr;
    char s[1000];
    ptr=fopen("output.txt","w");

    if (ptr==NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence : ");
    fgets(s,sizeof(s),stdin);
    fprintf(ptr,"%s",s);
    fclose(ptr);
    return 0;
}

//Not verified