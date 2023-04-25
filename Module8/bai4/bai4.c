#include <stdio.h>
#include <stdlib.h>

void input(int *lower, int *upper){
    printf("Input lower limit: ");
    scanf("%d", lower);
    printf("Input upper limit: ");
    scanf("%d", upper);
}

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    system("cls");
    int lower, upper;

    input(&lower, &upper);
    printf("Prime numbers between %d to %d are: ",lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}