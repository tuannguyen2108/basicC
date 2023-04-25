#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int *ptr1, *ptr2, *ptr3;

    printf("\n%p", ptr1 = ptr1 - 2);                      //Lệnh hợp lệ
    printf("\n%p", ptr3 = ptr2 - ptr1);                   //Lệnh hợp lê
    printf("\n%p", ptr3 = ptr2 - ptr1 - 2);               //Lệnh hợp lệ
    printf("\n%p", ptr1 = (int*)((int)ptr1 * 2));         //Lệnh không hợp lệ => đã fix lại 
    printf("\n%p", ptr3 = (int*)((int)ptr1 * (int)ptr2)); //Lệnh không hợp lệ => đã fix lại 
    printf("\n%p", ptr1 = (int*)((int)ptr1 / 2));         //Lệnh không hợp lệ => đã fix lại 
    printf("\n%p", ptr3 = (int*)((int)ptr2 / (int)ptr1)); //Lệnh không hợp lệ => đã fix lại 

    return 0;
}
