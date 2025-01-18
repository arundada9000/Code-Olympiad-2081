/*
Rotate an Array
Given an array of size N, rotate the array to the right by K positions.

Example:
Input: arr = [1, 2, 3, 4, 5], K = 2 → Output: [4, 5, 1, 2, 3]
*/
#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int N, int K)
{
    K = K % N; // Handle cases where K >= N
    if (K == 0)
        return; // No rotation needed if K is 0 or multiple of N

    reverse(arr, 0, N - 1);

    reverse(arr, 0, K - 1);

    reverse(arr, K, N - 1);
}

void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K;

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &K);

    rotateArray(arr, N, K);

    printf("Rotated Array: ");
    printArray(arr, N);

    return 0;
}

/*
Brute force method
 Function to rotate the array one position to the right
void rotateByOne(int arr[], int N)
{
    int last = arr[N - 1]; // Store the last element
    for (int i = N - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

 Function to rotate the array K times
void rotateArray(int arr[], int N, int K)
{
    K = K % N; // Handle cases where K >= N
    for (int i = 0; i < K; i++)
    {
        rotateByOne(arr, N); // Rotate by one position K times
    }
}
*/

/*
Using a temporary array
 Function to rotate the array using an extra array
void rotateArray(int arr[], int N, int K)
{
    K = K % N; // Handle cases where K >= N
    int temp[N]; // Temporary array to store rotated elements

     Place each element at its new position
    for (int i = 0; i < N; i++)
    {
        temp[(i + K) % N] = arr[i];
    }

    Copy the temporary array back to the original array
    for (int i = 0; i < N; i++)
    {
        arr[i] = temp[i];
    }
}
*/