#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    
    int n = 0;
    int temp = 0;

    printf("Input of number: ");
    scanf("%d",&n);
    if (n >= 10000000) {
        return 0;
    } else {
        while (n != 0){
            int a = n % 10;
            n /= 10;
            if ( a == 3) {
                temp += 1;
            } 
        }
    }
    printf("The number threes in the  said number is %d", temp);
    return 0;
}