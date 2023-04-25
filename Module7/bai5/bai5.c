#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    int num1 = 0, num2 = 0, bit0 = 0, bit1 = 0; 

    printf("Input any number: ");
    scanf("%d", &num1);
    //num2 = num1;
    while (num1 != 0) {
        if ((num1 & 1) == 1) {
            bit1++;
        }
        num1 >>= 1;
    }
    bit0 = (sizeof(int)*8) - bit1;
    //num2 = ~num2;
    //while (num2 != 0) {
        //if ((num2 & 1) == 1) {
            //bit0++;
        //}
        //num2 >>= 1;
    //}
    printf("Output number of ones: %d\n", bit1);
    printf("Output number of zeros: %d\n", bit0);
    return 0;
}

