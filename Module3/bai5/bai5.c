#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    system("cls");
    char c;

    printf("Input chacracter: ");
    scanf("%c", &c);

    if (isalpha(c)) {
        printf("%c is character\n", c);
    } else if (isdigit(c)) {
        printf("%c is digit\n", c);
    } else {
        printf("%c is special characters\n", c);
    }
    return 0;
}

