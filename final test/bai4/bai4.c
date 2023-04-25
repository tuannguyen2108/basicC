#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define fup(a, b) for (int i = a; i < b; i++)
#define fdown(a, b) for (int i = a; i > b; i--)
#define print(x) printf("%lld\n", x)

typedef long long ll;

struct product
{
    char name[100];
    ll quantity;
    float cost;
    float saleprice;
};

int main()
{
    system("cls");
    ll n;
    printf("Enter amount of product types: ");
    scanf("%lld", &n);
    struct product product[n];
    fup(0, n)
    {
        printf("Inform of product %lld:\n", i + 1);
        printf("Enter product name: ");
        scanf("%s", product[i].name);
        printf("Enter amount: ");
        scanf("%lld", &product[i].quantity);
        printf("Enter cost: ");
        scanf("%f", &product[i].cost);
        printf("Enter saleprice: ");
        scanf("%f", &product[i].saleprice);
    }
    fup(0, n)
    {
        printf("Product %lld information: \n", i + 1);
        printf("Product name: %s\n", product[i].name);
        printf("Product amount: %lld\n", product[i].quantity);
        printf("Product saleprice: %.2f\n", product[i].saleprice);
        printf("Product profit: %.2f\n", (product[i].quantity * product[i].saleprice) - (product[i].quantity * product[i].cost));
    }
    return 0;
}