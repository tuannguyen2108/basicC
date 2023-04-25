#include <stdio.h>
#include <stdint.h>
struct MyData
{
uint8_t data1;
uint32_t data2;
uint8_t data3;
uint16_t data4;
};
int main()
{
struct MyData DataExample = {};
DataExample.data1 = 0x11;
DataExample.data2 = 0xFFEEFE12;
DataExample.data3 = 0xAB;
DataExample.data4 = 0xFFE2;
uint8_t *ptr = (uint8_t*)&DataExample;
uint8_t totalSize = sizeof(DataExample);
for (uint8_t i = 0; i <totalSize; i++)
{
printf("Address - Value:%p - %X\n", ptr, *ptr);
ptr++;
}
}