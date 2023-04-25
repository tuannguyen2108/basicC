#include <stdio.h>
#include <stdlib.h>
#define fup(a, b) for (int i = a; i <= b; i++)
#define fdown(a, b) for (int i = a; i => b; i--)
#define print(x) printf("%d ", x)
typedef long long ll;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrange(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
        {
            left++;
        }
        while (arr[right] % 2 == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    system("cls");
    int arr[] = {17, 42, 19, 7, 27, 24, 30, 54, 73};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    fup(1, n)
    {
        print(arr[i]);
    }
    rearrange(arr, n);
    printf("\nThe array after segregation is: ");
    fup(1, n)
    {
        print(arr[i]);
    }
    return 0;
}
