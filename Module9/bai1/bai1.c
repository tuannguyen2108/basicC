#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int month;
    printf("Input Month No: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Month have 31 days");
        break;
    case 2:
        printf("Month have 29 days");
        break;
    default:
        printf("Month have 30 days");
        break;
    }

    return 0;
}