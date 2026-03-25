#include <stdio.h>

int main()
{
    int arr[5], i;
    int matrix[3][3], j;
    int sum = 0;

    // Input for 1D array
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print 1D array
    printf("Elements in the 1D array are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Input for 3x3 matrix
    printf("\n\nEnter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of all elements
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    // Display sum
    printf("Sum of all elements in the matrix = %d", sum);

    return 0;
}
