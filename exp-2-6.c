//Write a C program to prepare pay slip using following data;
//Da=10% of basic,
//Hra=7.50% of basic,
//Ma=300,
//Pf=12.50% of the basic,
//Gross = basic + Da + Hra + Ma,
//Nt = Gross - Pf,

#include<stdio.h>

int main()
{
    int basic;
    printf("Enter basic salary : ");
    scanf("%d",&basic);

    float Da = 0.1*basic;
    float Hra = 0.075*basic;
    int Ma=300;
    float Pf = 0.125*basic;
    float Gross = basic + Da + Hra + Ma;
    float Nt = Gross - Pf;

    printf("  Da=%0.2f\n  Hra=%0.2f\n  Ma=%d\n  Pf=%0.2f\n",Da,Hra,Ma,Pf);
    printf("  Gross=%0.2f\n  Nt=%0.2f\n",Gross,Nt);
    return 0;
}