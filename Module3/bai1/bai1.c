#include <stdio.h>
#include <stdbool.h>

int main()
{
    system("cls");
    printf("The size of int = %d bytes\n",sizeof(int));
    printf("The size of long = %d bytes\n",sizeof(long));
    printf("The size of bool = %d bytes\n",sizeof(bool));
    printf("The size of double = %d bytes\n",sizeof(double));
    printf("The size of long double = %d bytes",sizeof(long double));

    return 0;
}