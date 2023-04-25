#include <stdio.h>
#include <stdlib.h>

void input(int *sec1, int *sec2)
{
    printf("Enter the first number of seconds: ");
    scanf("%d", sec1);
    printf("Enter the second number of seconds: ");
    scanf("%d", sec2);
}

void theTime(int sec1, int sec2)
{
    if (sec1 <= sec2)
        return 0;
    else
    {
        int hours1 = sec1 / 3600;
        int minutes1 = (sec1 % 3600) / 60;
        int seconds1 = sec1 % 60;
        printf("The first time is %d:%d:%d\n", hours1, minutes1, seconds1);
        int hours2 = sec2 / 3600;
        int minutes2 = (sec2 % 3600) / 60;
        int seconds2 = sec2 % 60;
        printf("The second time is %d:%d:%d\n", hours2, minutes2, seconds2);
        int diff = sec1 - sec2;
        int hours3 = diff / 3600;
        int minutes3 = (diff % 3600) / 60;
        int seconds3 = diff % 60;
        printf("Time difference is %d:%d:%d", hours3, minutes3, seconds3);
    }
}

int main()
{
    system("cls");
    int sec1, sec2;
    input(&sec1, &sec2);
    theTime(sec1, sec2);

    return 0;
}