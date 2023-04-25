#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int x;
    int values[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = values;
    for (x = 0; x < 10; x++)
    {
        printf("Values[%d] is %d\n", x, values[x]);
        printf("Values[%d] is %d\n", x, *ptr);
        ptr++;
    }

    return 0;
}