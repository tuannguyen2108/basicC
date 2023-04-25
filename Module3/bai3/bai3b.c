#include <stdio.h>
#include <stdlib.h>

void decToHexa(int dec) {
    int hexa[32];
    int i = 0;
    while (dec > 0) {
        hexa[i] = dec % 16;
        dec = dec / 16;
        i++;
    }
    for (int j = i - 1 ; j >= 0; j--)
    {
        if (hexa[j]==10) {
            printf("A");
        } else if (hexa[j]==11) {
            printf("B");
        } else if (hexa[j]==12) {
            printf("C");
        } else if (hexa[j]==13) {
            printf("D");
        } else if (hexa[j]==14) {
            printf("E");
        } else if (hexa[j]==15) {
            printf("F");
        } else {
            printf("%d",hexa[j]);
        }
    }
}            
                
int main() 
{   
    system("cls");
    int dec=0;
    printf("Enter value of n: ", dec);
    scanf("%d", &dec);
    printf("The hexa value of %d is: ", dec);
    decToHexa(dec);
    return 0;
}
