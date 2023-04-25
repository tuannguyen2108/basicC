#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int n, i;
    long long sum = 0, term = 9;

    printf("Input the number or terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += term;
        printf("%lld ", term);
        term = term * 10 + 9;
    }

    printf("\nThe sum of series =  %lld", sum);

    return 0;
}
