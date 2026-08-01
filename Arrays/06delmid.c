#include <stdio.h>
int main()
{
    int i, n, item, pos, arr[20];

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

        // Deletion of an element in middle of array
        printf("\nEnter the position of deletion: ");
        scanf("%d", &pos);
        // Checking for invalid position
        if (pos < 1 || pos > n + 1)
        {
            printf("Invalid Position for Deletion");
        }
        else
        {
            for (i = pos - 1; i < n; i++)
            {
                arr[i] = arr[i + 1];
            }
            n = n - 1;
            printf("Array after deletion:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\nNew size of array is: %d", n);
        }
    }
}