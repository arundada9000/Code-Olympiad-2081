/*
Find Duplicates in an Array
Problem Statement:
Given an array of n integers where each integer is in the range 1 to n, some elements appear more than once. Find all duplicates in the array.
*/

#include <stdio.h>
#include <stdlib.h>

void findDuplicates(int arr[], int n)
{
    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]) - 1;

        // Check if the value at that index is already negative
        if (arr[index] < 0)
            printf("%d ", abs(arr[i])); // It's a duplicate

        else
            arr[index] = -arr[index]; // Mark as visited
    }
}

int main()
{
    system("cls");
    int arr[] = {1, 4, 5, 5, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);
    return 0;
}
