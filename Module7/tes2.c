#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("cls");

    int myArray[] = {1, 2, 3, 4, 5};
    int length = sizeof(myArray)/sizeof(myArray[0]);
    int a = sizeof(myArray);
    int b = sizeof(myArray[0]);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("The length of myArray is %d", length);
    

    return 0;
}
