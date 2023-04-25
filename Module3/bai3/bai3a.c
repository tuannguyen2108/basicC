#include <stdio.h>
#include <stdlib.h>

void decToHexa(int dec)
{
    int quotient, remainder;
    int i = 0;
    char hexa[100];

    quotient = dec;

    while (quotient != 0)
    {
        remainder = quotient % 16;

        switch (remainder)
        {
        case 10:
            hexa[i] = 'A';
            break;
        case 11:
            hexa[i] = 'B';
            break;
        case 12:
            hexa[i] = 'C';
            break;
        case 13:
            hexa[i] = 'D';
            break;
        case 14:
            hexa[i] = 'E';
            break;
        case 15:
            hexa[i] = 'F';
            break;
        default:
            hexa[i] = remainder + '0';
            break;
        }

        i++;
        quotient = quotient / 16;
    }

    printf("The hexa value is ", dec);

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexa[j]);
    }
}

int main()
{
    system("cls");
    int dec;

    printf("Enter value of n: ");
    scanf("%d", &dec);

    decToHexa(dec);

    return 0;
}
