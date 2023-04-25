#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define fup(a, b) for (int i = a; i < b; i++)
#define fdown(a, b) for (int i = a; i > b; i--)
#define print(x) printf("%lld\n", x)

typedef long long ll; 

struct Person
{
    char name[50];
    ll age;
    ll day, month, year;
};

int main()
{
    system("cls");
    ll n;
    printf("Enter amount of people: "); scanf("%lld", &n);
    struct Person people[n];
    fup(0, n)
    {
        printf("Enter inform of person %lld: \n", i + 1);
        printf("Enter name: "); scanf("%s", people[i].name);
        printf("Enter age: "); scanf("%lld", &people[i].age);
        printf("Enter your birthday (DD MM YYYY): "); scanf("%lld %lld %lld", &people[i].day, &people[i].month, &people[i].year);
    }
    printf("\nInformation of the person entered:\n");
    fup(0, n)
    {
        printf("Name: %s\n", people[i].name);
        printf("Age: %lld\n", people[i].age);
        printf("Date of birth: %02lld - %02lld - %lld\n", people[i].day, people[i].month, people[i].year);
        printf("\n");
    }
    return 0;
}