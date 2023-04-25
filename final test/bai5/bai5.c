#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int missingSmallElement(int arr[], int low, int high)
{
    if (low > high)
        return low;
    int mid = low + (high - low) / 2;
    if (arr[mid] == mid)
        return missingSmallElement(arr, mid + 1, high);
    else
        return missingSmallElement(arr, low, mid - 1);
}
int main()
{
    system("cls");
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int ctr = sizeof(arr) / sizeof(0);
    int i;
    printf("The given array is: ");
    for (i = 0; i < ctr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int low = 0, high = ctr - 1;
    printf("The missing smallest element is: %d", missingSmallElement(arr, low, high));
    return 0;
}