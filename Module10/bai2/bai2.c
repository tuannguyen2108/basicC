#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int i, n;
    printf("\nInput the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array: ", n);
    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0], max2 = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    printf("The second largest celement in the array is: %d", max2);

    return 0;
}
