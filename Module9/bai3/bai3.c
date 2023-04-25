#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int n, i, j, num;

    printf("Input n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        num = i % 2; 

        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num = 1 - num; 
        }
        printf("\n");
    }

    return 0;
}
