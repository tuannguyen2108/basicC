#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    int a, b, sum;
    int *ptr1, *ptr2;
   
    printf("Value of a is: ");
    scanf("%d", &a);
    printf("Value of b is: ");
    scanf("%d", &b);
  
    ptr1 = &a;
    ptr2 = &b;
    sum  = *ptr1 + *ptr2;
   
    printf("The sum of the 2 numbers %d and %d is %d", a, b, sum);
   
    return 0;
}
