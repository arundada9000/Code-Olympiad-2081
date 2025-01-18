/*
You are given a sorted array of integers and a target value. Your task is to determine if the target value exists in the array. If it exists, return its index; otherwise, return -1. Your solution should have a time complexity better than O(n).

Basically implement a binary search
*/
#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // To avoid overflow

        if (arr[mid] == target)
            return mid; // Target found

        if (arr[mid] < target)
            left = mid + 1; // Search in the right half
        else
            right = mid - 1; // Search in the left half
    }

    return -1; // Target not found
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target element: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);
    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
