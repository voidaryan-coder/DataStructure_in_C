#include <stdio.h>
int main()
{
    int arr[100][100], n, i, j, sum_left = 0, sum_right = 0;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    arr[n][n];
    printf("Enter the elements:\n", n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (i == j)
                sum_left = sum_left + arr[i][j];
            if (i + j == n - 1)
                sum_right = sum_right + arr[i][j];

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int diff = sum_left - sum_right;

    printf("Sum of left diagonal element is : %d\n", sum_left);
    printf("Sum of right diagonal element is : %d\n", sum_right);
    printf("Difference of the sum of both diagonal is : %d", diff);

    return 0;
}