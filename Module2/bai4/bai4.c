#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    int num, sum = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Input the number %d: ", i);
        scanf("%d", &num);
        if (num % 2 != 0) {
            sum += num;
        }
    }
    printf("Sum of all values: %d", sum);

    return 0;
}
