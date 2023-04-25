#include <stdio.h>
#include <stdlib.h>
#define fup(a, b) for (int i = a; i <= b; i++)
#define fdown(a, b) for (int i = a; i = > b; i--)
#define print(x) printf("%lld ", x)
typedef long long ll;

int main()
{
    system("cls");
    ll n;
    printf("Input number: ");
    scanf("%lld", &n);
    printf("Factors of %lld: ", n);
    fup(1, n)
    {
        if (n % i == 0)
        {
            print(i);
        }
    }
    return 0;
}