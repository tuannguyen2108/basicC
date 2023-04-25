#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimes(int n) {
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    system("cls"); 
    
    int n=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Prime numbers less than %d is ", n);
    printPrimes(n);

    return 0;
}