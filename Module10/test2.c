#include <stdio.h>
#include <stdlib.h>

const int MAX_ARRAY = 100;
void EnterArray(int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter a[%d] = ", i);
        scanf("%d", (a + i));
    }
}
void ExportArray(int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("\nExport a[%d] = %d", i, *(a + i));
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
    EnterArray(arr, n);
    printf("\nExport array:\n");
    ExportArray(arr, n);
}
