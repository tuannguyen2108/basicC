#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int n, i, temp;
    printf("\nInput the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array: ", n);
    for (i = 0; i < n; ++i)
    {
        printf("\nEnter arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Elements of array is sorted in descending over: \n");
    for (int i = 0; i < n; ++i)
    {
        printf(" %d ", arr[i]);
    }
}