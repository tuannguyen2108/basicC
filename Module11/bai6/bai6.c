#include <stdio.h>
#include <stdlib.h>

enum day
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thurday,
    friday,
    saturday
};
int main()
{
    system("cls");
    enum day d1 = monday;
    enum day d2 = tuesday;
    printf("So ngay duoc luu tru trong bien d1 la %d\n", d1);
    printf("So ngay duoc luu tru trong bien d2 la %d\n", d2);
    return 0;
}