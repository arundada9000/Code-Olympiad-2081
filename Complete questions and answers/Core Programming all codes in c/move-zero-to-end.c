/*
Move Zeroes
Write a program to move all zeroes in an array to the end while maintaining the relative order of non-zero elements.

Example:
Input: [0, 1, 0, 3, 12] → Output: [1, 3, 12, 0, 0]
*/
#include <stdio.h>

void moveZeroes(int arr[], int n)
{
    int pos = 0; // Index to place the next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    // Fill the rest of the array with zeros
    while (pos < n)
    {
        arr[pos] = 0;
        pos++;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    system("cls");
    int arr[] = {5, 0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    moveZeroes(arr, n);

    printf("Modified Array: ");
    printArray(arr, n);

    return 0;
}
