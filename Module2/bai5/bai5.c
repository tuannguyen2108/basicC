#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    
    int bin = 0;
    int dec = 0;
    int i = 0;

    printf("Enter binary value: ");
    scanf("%d", &bin);
    
    while (bin != 0)
    {
        int rem = bin % 10;
        dec += rem * pow(2, i);
        ++i;
        bin /= 10;
    }
    
    printf("Decimal value is %d", dec);

    return 0;
}
