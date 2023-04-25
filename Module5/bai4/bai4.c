#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{   
    system("cls");

    int a, b;
    
    printf("First value = ");
    scanf("%d", &a);
    printf("Second value = ");
    scanf("%d", &b);
    
    swap(&a, &b);
    
    printf("Convert two value:\n");
    printf("First value = %d\n", a);
    printf("Second value = %d\n", b);
    
    return 0;
}

