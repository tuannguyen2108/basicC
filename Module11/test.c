#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name;
    int age;
    int day, month, year;
};

int main()
{
    system("cls");
    int t, i = 0;
    struct person people;
    printf("Enter amount of people: "); scanf("%d", &t);
    while (t--)
    {
        i++;
        printf("\nEnter inform of people %d: ", t - (t - i));
        printf("\nEnter name: "); scanf("%s", &people.name);
        printf("Enter age: "); scanf("%d", &people.age);
        printf("Enter your birthday (DD MM YYYY): "); scanf("%d%d%d", &people.day, &people.month, &people.year);
        printf("%d Person information: \n", t - (t - i));
        printf("Name: %c", people.name);
        printf("Age: %d\n", people.age);
        printf("Your birthday: %d/%d/%d\n", people.day, people.month, people.year);
    }
    return 0;
}