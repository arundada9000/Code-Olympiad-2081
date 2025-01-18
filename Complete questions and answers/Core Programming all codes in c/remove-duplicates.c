/*
Remove Duplicates from Sorted Array
Write a function to remove duplicates from a sorted array in-place.

Example:
Input: [0, 0, 1, 1, 2, 3, 3, 4] → Output: [0, 1, 2, 3, 4]

*/

#include <stdio.h>

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int uniqueIndex = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[uniqueIndex] = arr[i];
            uniqueIndex++;
        }
    }

    return uniqueIndex;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nNew length: %d\n", newLength);

    return 0;
}
