#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    char str[100];
    char *ptr;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str + strlen(str) - 1; 
    printf("Reverse of the string is: ");
    while(ptr >= str) {
       printf("%c", *ptr);
       ptr--;
    }
   return 0;
}
