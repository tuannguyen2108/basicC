#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int row, col, i, j, num = 1;
    
    printf("Input number of lines: ");
    scanf("%d", &row);
    printf("Number of  numbers in a line: ");
    scanf("%d", &col);

    int matrix[row][col];
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            matrix[i][j] = num;
            num++;
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
