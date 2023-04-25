#include <stdio.h>
#include <stdlib.h>

int countLeadingZeros(unsigned int x) {
    int count = 0;
    while ((x & 0x80000000) == 0) {
        //giá trị 0x80000000 tương ứng với số có bit đầu tiên là 1 (tức bit cao nhất) và tất cả các bit còn lại đều là 0.
        count++;
        x <<= 1;
    }
    return count;
}

int main() 
{
    system("cls");

    unsigned int num;
    printf("Enter any number: ");
    scanf("%u", &num);
    int leadingZeros = countLeadingZeros(num);
    printf("Total number of leading zeros in %u = %d\n", num, leadingZeros);

    return 0;
}
