#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a = 10;          
    float b = 3.14;  
    char c = 'a';        
    long d = 1000000;     
    double e = 2.718281;

    printf("The address of variable a is: %p\n", &a);
    printf("The address of variable a is: %p\n", &b);
    printf("The address of variable a is: %p\n", &c);
    printf("The address of variable a is: %p\n", &d);
    printf("The address of variable a is: %p\n", &e);

    return 0;
}