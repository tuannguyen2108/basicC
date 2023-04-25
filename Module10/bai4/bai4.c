#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char str[100];
    int len, count = 0;
    printf("Input the string: ");
    fgets(str, 100, stdin);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            count++;
        }
    }
    printf("Total number of words in the string is: %d", count);
    return 0;
}
