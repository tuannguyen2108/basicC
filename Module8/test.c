#include <stdio.h>
#include <stdlib.h>

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main(void)
{
    system("cls");
    int a = 10, b = 20;

    int (*max_ptr)(int,int);
    max_ptr = &max;
    int m = (*max_ptr)(a,b);

    printf("m is %d", m);
    return 0;
}
