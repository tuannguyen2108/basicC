#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct sensor
{
    uint8_t temp;
    uint8_t humi;
    uint16_t lux;
};

int main()
{
    system("cls");
    struct sensor *sensorPtr, sensorA = {0, 0, 0};
    sensorPtr = &sensorA;
    
    sensorPtr->temp = 23;
    sensorPtr->humi = 50;
    sensorPtr->lux = 10000;
    
    printf("Nhiet do: %d\n", sensorPtr->temp);
    printf("Do am: %d\n", sensorPtr->humi);
    printf("Anh sang: %d\n", sensorPtr->lux);

    return 0;
}