#include <stdio.h>
#include <stdlib.h>
#define print(s, m, t, w, th, f, st) printf("%d %d %d %d %d %d %d", s, m, t, w, th, f, st)
enum day
{
    sunday = 1,
    monday,
    tuesday = 5,
    wednesday,
    thurday = 10,
    friday,
    saturday
};
int main()
{
    system("cls");
    print(sunday, monday, tuesday, wednesday, thurday, friday, saturday);
    return 0;
}