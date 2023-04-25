#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    
    int sum = 0, n = 0;
    while (sum <= 10000) 
    {
        n++;
        sum += n;
    }
    printf("S = %d\n", sum);
    printf("n = %d\n", n);
    return 0;
}
