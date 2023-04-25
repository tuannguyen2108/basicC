#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    int trailingZeros = 0;
    while ((num & 1) == 0) {
       trailingZeros++;
       num >>= 1;
    }

    printf("Total number of trailing zeros la = %d\n", trailingZeros);
    return 0;
}
