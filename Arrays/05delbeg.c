#include <stdio.h>
int main()
{
    int i, n, item, arr[20];

    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);

    // Checking Underflow
    if (n == 0)
    {
        printf("Array Underflow\n");
    }
    else
    {
        // Input and Displaying of Array Elements
        printf("Enter elements of array: \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("Given Array is:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        // Deletion of an element at the beginning
        for (i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        n = n - 1;
        printf("\nArray after deletion of element at beginning:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\nNew size of array: %d", n);
    }
}