#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    unsigned int number1 = 18;
    printf("number: %u\n", number1);

    number1 = number1 >> 1;
    printf("sau khi dich sang phai 1: %u\n", number1);

    number1 = number1 >> 1;
    printf("sau khi dich sang phai 2: %u\n", number1);

    number1 = number1 >> 1;
    printf("sau khi dich sang phai 3: %u\n", number1);

    unsigned int number2 = 18;
    number2 = number2 << 1;
    printf("sau khi dich sang trai 1: %u\n", number2);

    number2 = number2 << 1;
    printf("sau khi dich sang trai 2: %u\n", number2);

    number2 = number2 << 1;
    printf("sau khi dich sang trai 3: %u\n", number2);

    return 0;
}
