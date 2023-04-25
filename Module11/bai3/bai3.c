#include <stdio.h>
#include <stdlib.h>

struct time
{
    int sec, min, hour;
};

int main()
{
    system("cls");
    struct time time1, time2, time3;
    printf("Please enter start time: \n");
    printf("Enter hour, minutes and seconds: \n");
    scanf("%d\n%d\n%d", &time1.hour, &time1.min, &time1.sec);
    printf("Please enter stop time: \n");
    printf("Enter hour, minutes and seconds: \n");
    scanf("%d\n%d\n%d", &time2.hour, &time2.min, &time2.sec);

    int time_1, time_2, time_3;
    time_1 = time1.hour * 3600 + time1.min * 60 + time1.sec;
    time_2 = time2.hour * 3600 + time2.min * 60 + time2.sec;
    time_3 = abs(time_1 - time_2);
    time3.hour = time_3 / 3600;
    time3.min = (time_3 - (time3.hour * 3600)) / 60;
    time3.sec = time_3 - ((time3.hour * 3600) + (time3.min * 60));
    printf("-----------------------------------------------\n");
    printf("Time difference: %d:%d:%d - %d:%d:%d = %d:%d:%d", time1.hour, time1.min, time1.sec, time2.hour, time2.min, time2.sec, time3.hour, time3.min, time3.sec);

    return 0;
}