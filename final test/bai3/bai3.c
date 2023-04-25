#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    system("cls");
    char str[100];
    printf("Input string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
