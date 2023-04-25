#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int i, n, pos, val;
    printf("\nInput the size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Input %d elements in the array: ", n);
    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The current list of the array: ");
       for (int i = 0; i < n; ++i)
    {
      printf("%d ", arr[i]);
    }
    printf("\nInput the position, where the value to be inserted: ");
    scanf("%d", &pos);
    printf("Input the value to be inserted: ");
    scanf("%d", &val);
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    printf("After insert the element the new is: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
