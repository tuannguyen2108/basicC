#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    int number = 16;
    printf("Original value: %d\n", number);

    number |= (1 << 0) | (1 << 1) | (1 << 3);
    printf("The value of the number is %d\n", number);
    
    int bit5 = (number >> 4) & 1; 
    printf("The 5th bit value of the number is %d\n", bit5); 

    number = 0; 
    printf("The value of number after clearing all bits is %p\n", number); 

    number = ~0;
    printf("The value of number after setting all bits to 1 is %d\n", number); 

    return 0;
}
