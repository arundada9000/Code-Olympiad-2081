//  Kadane's Algorithm to find maximum sum of subarray
// For a given array find out the maximum sum a subarray can have
// Hard problem
#include <stdio.h>

int maxSubArraySum(int arr[], int n)
{
    int max_so_far = arr[0];      // Initialize max sum encountered so far
    int max_ending_here = arr[0]; // Initialize current subarray sum

    for (int i = 1; i < n; i++)
    {
        // Update the maximum subarray ending at index i
        max_ending_here = (arr[i] > max_ending_here + arr[i]) ? arr[i] : max_ending_here + arr[i];

        max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
    }

    return max_so_far;
}

int main()
{
    int arr[] = {-2, 1, -3, -4, -1, 2, 1, -5, -4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubArraySum(arr, n);

    printf("Maximum subarray sum is %d\n", max_sum);

    return 0;
}
