/*
Spiral Matrix
Given a 2D matrix, return its elements in spiral order.
*/
#include <stdio.h>

void spiralOrder(int matrix[][100], int rows, int cols)
{
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int i;

    printf("Spiral Order: ");
    while (top <= bottom && left <= right)
    {
        // Traverse from left to right
        for (i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top++; // Move top boundary down

        // Traverse from top to bottom
        for (i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--; // Move right boundary left

        // Traverse from right to left
        if (top <= bottom)
        {
            for (i = right; i >= left; i--)
            {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--; // Move bottom boundary up
        }

        // Traverse from bottom to top
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++; // Move left boundary right
        }
    }
    printf("\n");
}

int main()
{
    int matrix[100][100], rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    spiralOrder(matrix, rows, cols);

    return 0;
}
