#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    int a = 5;
    int *pa = &a;

    printf("The value of variable pa is %p\n", pa);
    printf("The address of variable a is %p\n", &a);
    printf("The device value pa points to is %d\n", *pa);
    printf("The value of variable a is %d\n", a);
    printf("The address of variable pa is %p\n", &pa);

    return 0;
}