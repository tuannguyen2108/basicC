#include <stdio.h>
#include <stdlib.h>

void input(int *num){
    printf("Enter any number: ");
    scanf("%d", num);
}

void output(int sum){
    printf("The sum of digits: %d", sum);
}

int sumOfDigits(int num){
    int sum = 0;
    while (num > 0) {
        sum = sum + num % 10;
        num /= 10;
    }

    return sum;
}

int main(){
    system("cls");
    int num, sum;

    input(&num);
    sum = sumOfDigits(num);
    output(sum);
    return 0;
}