#include <stdio.h>
int main()
{
    int arr[100][100], m, n, i, j, c_zero = 0, c_non = 0;

    // Input the size of the array
    printf("Enter the size of matrix: ");
    scanf("%d%d", &m, &n);

    arr[m][n];
    
    // Input array elements
    printf("Enter the elements:\n", n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements are:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Counting non zero element
            if (arr[i][j] == 0)
            {
                c_zero++;
            }
            else
            {
                c_non++;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    //Checking for sparse matrix
    if (c_zero > c_non)
    {
        printf("It is a sparse matrix");
    }
    else
    {
        printf("It is not a sparse matrix");
    }
    return 0;
}