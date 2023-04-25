#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char str[100];
    int i, alphabets, digits, specials;
    alphabets = digits = specials = 0;

    printf("Input the string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            specials++;
    }
    printf("Number of Alphabets in the string is: %d\n", alphabets);
    printf("Number of Digits in the string is: %d\n", digits);
    printf("Number of Special characters in the string is: %d\n", specials);
    return 0;
}