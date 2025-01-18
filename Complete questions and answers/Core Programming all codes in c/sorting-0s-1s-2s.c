/*
Dutch National Flag Problem
Sort an array containing only 0s, 1s, and 2s without using a sorting algorithm.

Example:
Input: [0, 1, 2, 1, 0, 2] → Output: [0, 0, 1, 1, 2, 2]
*/
#include <stdio.h>

void sort012(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1, temp;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {

            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 1, 0, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
