#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
  
    int a = 10;
    int b = 20;

    int result1 = a & b;
    printf("10 & 20 = %d\n", result1);
    //10 = 1010; 20 = 10100; 1010 & 10100 = 00000; 00000 tương ứng 0 trong hệ thập phân

    int c = 15;
    int d = 17;

    int result2 = c | d;
    printf("15 | 17 = %d\n", result2); 
    //15 = 1111; 17 = 10001; 1111 & 10001 = 11111; 11111 tương ứng 31 trong hệ thập phân

    int e = 12;
    int f = 8;
    int result3 = e ^ f;
    printf("12 ^ 8 = %d\n", result3); 
    //12 = 1100; 8 = 1000; 1100 ^ 1000 = 100; 100 tương ứng 4 trong hệ thập phân
    int value = 9;
    int result4 = ~value;
    printf("~9 = %d\n", result4);
    //9 = 0b00001001; ~1001 = 0b11110110; 0b11110110 tương ứng -10 trong hệ thập phân

    return 0;
}