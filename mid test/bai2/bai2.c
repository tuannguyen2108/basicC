#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    
    int n, reversed_n = 0;
    printf("The original number = ");
    scanf("%d", &n);

    while (n != 0) 
    {
        reversed_n = reversed_n * 10 + n % 10;
        n /= 10;
    }

    printf("The reversed of the said number = %d\n", reversed_n);
    return 0;
}
