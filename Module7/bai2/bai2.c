#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    int number = 16;
    printf("Original value: %d\n", number);

    number |= (1 << 0) | (1 << 1) | (1 << 3);
    printf("After setting bits 0, 1, 3: %d\n", number);

    number &= ~(1 << 0) & ~(1 << 1) & ~(1 << 3);
    printf("After clearing bits 0, 1, 3: %d\n", number);
      
    number ^= (1 << 2) | (1 << 4) | (1 << 5);
    printf("After toggling bits 2, 4, 5: %d\n", number);

    return 0;
}
