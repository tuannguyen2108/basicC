#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
    uint8_t data1;
    uint32_t data2;
    uint8_t data3;
    uint16_t data4;
} MyData;
int main()
{
    system("cls");
    MyData DataExample = {};
    MyData *dataPtr = &DataExample;
    dataPtr->data1 = 0x11;
    dataPtr->data2 = 0xFFEEFE12;
    dataPtr->data3 = 0xAB;
    dataPtr->data4 = 0xFFE2;
    uint8_t *ptr = (uint8_t *)dataPtr;
    uint8_t totalSize = sizeof(DataExample);
    for (uint8_t i = 0; i < totalSize; i++)
    {
        printf("Address - Value:%p - %X\n", ptr, *ptr);
        ptr++;
    }
}