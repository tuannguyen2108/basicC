#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int x;
    int values[10] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    for (x = 0; x < 10; x++)
    {
        values[x] = 1;
        printf("Values[%d] is %d\n", x, values[x]);
        *(values + x) = 1;
        printf("Values[%d] is %d\n", x, *(values + x));
    }
    return 0;
}