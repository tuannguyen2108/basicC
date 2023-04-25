#include <stdio.h>
#include <stdlib.h>
#define fup(a, b) for (int i = a; i <= b; i++)
#define fdown(a, b) for (int i = a; i => b; i--)
#define print(x) printf("%lld ", x)

typedef long long ll; 
enum week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};
int main()
{
    system("cls");
    enum week day;
    day = Wed;
    ll i;
    printf("Chi so cua Wed la %d\n", day);
    fup(Mon, Sun)
        print(i);
    return 0;
}