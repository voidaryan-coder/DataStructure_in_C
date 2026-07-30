#include <stdio.h>
int main()
{
    int i, n, item, pos, arr[20];

    // Input and Displaying of Array Elements
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);

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
    
    // Checking Overflow
    if (n == 20)
    {
        printf("\nArray Overflow\n");
    }

    // Insertion of an element in middle
    else
    {
        printf("\nEnter the element to be inserted: ");
        scanf("%d", &item);
        printf("Enter the position of insertion: ");
        scanf("%d", &pos);
        // Checking for invalid position
        if (pos < 1 || pos > n + 1)
        {
            printf("Invalid Position for Insertion");
        }
        else
        {
            for (i = n - 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = item;
            n = n + 1;
            printf("Array after insertion:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\nNew size of array is: %d", n);
        }
    }
}