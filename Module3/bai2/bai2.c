#include <stdio.h>
#include <stdlib.h>

void decToBin(int n) {
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1 ; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() 
{   
    system("cls");

    int n=0;
    printf("Enter value of n: ", n);
    scanf("%d", &n);
    printf("The binary value of %d is: ", n);
    decToBin(n);

    return 0;
}

