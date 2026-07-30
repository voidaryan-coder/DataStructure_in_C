#include <stdio.h>
int main()
{
    int i, n, item, arr[20];

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

    // Insertion of an element at the end
    else
    {
        printf("\nEnter the element to be inserted: ");
        scanf("%d", &item);

        arr[n] = item;
        n = n + 1;
        printf("Array after insertion at the end position:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\nNew size of array: %d", n);
    }
}