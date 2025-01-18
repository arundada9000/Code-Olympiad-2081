/*
 Rotate Matrix by 90 Degrees
Problem Statement:
Given an n x n matrix, rotate it 90 degrees clockwise in place.
In place means modifying the matrix in-place (without using extra space for another matrix) and rotating 90 degrees can be done by first transposing then reversing each row
*/
#include <stdio.h>

void rotateMatrix(int matrix[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}

void printMatrix(int matrix[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Original Matrix:\n");
    printMatrix(matrix, 3);

    rotateMatrix(matrix, 3);

    printf("\nRotated Matrix:\n");
    printMatrix(matrix, 3);

    return 0;
}
