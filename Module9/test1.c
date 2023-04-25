#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int point;

    printf("Enter subject scores from 0 to 10: ");
    scanf("%d", &point);
    switch (point) {
        case 0:
        case 1:
            printf("Grade E.\n");
            break;
        case 2:
        case 3:
            printf("Grade D.\n");
            break;
        case 4:
        case 5:
            printf("Grade C.\n");
            break;
        case 6:
        case 7:
            printf("Grade B.\n");
            break;
        case 8:
        case 9:
        case 10:
            printf("Grade A.\n");
            break;
        default:
            printf("Invalid entry point.\n");
            break;
    }
    return 0;
}
