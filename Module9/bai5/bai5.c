#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int amount;
    printf("Input amount: ");
    scanf("%d", &amount);

    int notes[9] = {0};

    int denominations[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    int i = 0;
    while (amount > 0 && i < 9)
    {
        notes[i] = amount / denominations[i];
        amount %= denominations[i];
        i++;
    }

    printf("Total number of notes:\n");
    for (i = 0; i < 9; i++)
    {
        if (notes[i] >= 0)
        {
            printf("%d : %d \n", denominations[i], notes[i]);
        }
    }
    return 0;
}
