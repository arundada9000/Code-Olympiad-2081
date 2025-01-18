/*
Subarray with Given Sum
Problem Statement:
Given an array of non-negative integers, find a contiguous subarray that sums to a given target S.
*/

#include <stdio.h>

void findSubarrayWithSum(int arr[], int n, int S)
{
    int start = 0, current_sum = 0;

    for (int end = 0; end < n; end++)
    {
        current_sum += arr[end];

        // Shrink the window as long as current_sum > target_sum
        while (current_sum > S && start < end)
        {
            current_sum -= arr[start++];
        }

        if (current_sum == S)
        {
            printf("Found subarray from %d to %d\n", start, end);
            return;
        }
    }

    printf("No subarray with sum %d found\n", S);
}

int main()
{
    int arr[] = {11, 1, 2, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int S = 12;

    findSubarrayWithSum(arr, n, S);

    return 0;
}
