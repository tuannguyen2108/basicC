#include <stdio.h>
#include <stdlib.h>

unsigned char i = 0;

int main()
{   
    system("cls");

    for (i = 0; i <= 255; i++){
        if (i%10 != 0)
        {
            printf("%d - %c\t", i, i);
        }
        else printf("%d - %c\n", i, i);
    }

    printf("%d-%c", i, i);

    return 0;
}