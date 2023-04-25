#include <stdio.h>
#include <stdlib.h>

const int MAX_ARRAY = 100;
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void sortDescending(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void exportArray(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("\nExport a[%d] = %d", i, a[i]);
    }
}
int main()
{
    system("cls");

    int arr[MAX_ARRAY];
    int n;
    printf("\nEnter amount elements of array: ");
    scanf("%d", &n);
    printf("\nEnter array:\n");
    enterArray(arr, n);
    sortDescending(arr, n);
    printf("\nExport array:\n");
    exportArray(arr, n);
}