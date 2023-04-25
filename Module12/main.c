#include <stdio.h>
#include "CheckPrimeNumber.h"
int main()
{
    int checknumber = 0;
    printf("Enter number: ");
    scanf("%d", &checknumber);
    if (CheckPrimeNumber(checknumber))
    {
        printf("Yes");
    }
    else
        printf("No");
}