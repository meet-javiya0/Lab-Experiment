//Write C Program using global variable,static variable

#include<stdio.h>

int a=1;

int fun1()
{
    int b=10;
    printf("In fun1 the value of a = %d\n",a);

    b=b+5;
    printf("b=%d\n",b);
}

int fun2()
{
    static int b=10;
    printf("In fun2 the value of a = %d\n",a);

    b=b+5;
    printf("b=%d\n",b);
}

int main()
{
    int a=2;
    printf("In main fun the value of a = %d",a);

    printf("\n -------------- \n");

    fun1();
    fun1();

    printf("\n -------------- \n");

    fun2();
    fun2();
}