#include <stdio.h>
#include <stdlib.h>

void input(int *lower, int *upper){
    printf("Input lower limit: ");
    scanf("%d", lower);
    printf("Input upper limit: ");
    scanf("%d", upper);
}

void printEvenNumbers(int lower, int upper) {
    int i;
    printf("Even numbers between %d to %d: ", lower, upper);
    for(i=lower; i<=upper; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
}

void printOddNumbers(int lower, int upper) {
    int i;
    printf("\nOdd numbers between %d to %d: ", lower, upper);
    for(i=lower; i<=upper; i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
}

int main() {
    system("cls");
    int lower, upper;
    int i = 0;
    
    input(&lower, &upper);    
    printEvenNumbers(lower, upper);
    printOddNumbers(lower, upper);
    while (i != 0)
    return 0;
}
