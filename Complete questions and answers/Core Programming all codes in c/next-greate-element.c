/*
 Next Greater Element
Problem Statement:
Given an array, find the next greater element for each element. If no greater element exists, output -1.
Eg: for a given array 3,5,2,6,9 output will be 5,6,6,9,-1

*/
#include <stdio.h>
#include <stdlib.h>

void nextGreaterElement(int arr[], int n)
{
    int *result = (int *)malloc(n * sizeof(int)); // Array to store results
    int stack[n], top = -1;                       // Stack to track next greater elements

    for (int i = n - 1; i >= 0; i--)
    {
        // Pop elements from stack while they're <= current element
        while (top >= 0 && stack[top] <= arr[i])
        {
            top--;
        }

        // If stack is empty, no next greater element
        if (top == -1)
        {
            result[i] = -1;
        }
        else
        {
            result[i] = stack[top]; // Top of stack is the next greater element
        }

        // Push current element to stack
        stack[++top] = arr[i];
    }

    // Print the result
    for (int i = 0; i < n; i++)
    {
        printf("%d -> %d\n", arr[i], result[i]);
    }

    free(result);
}

int main()
{
    int arr[] = {3, 5, 2, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    nextGreaterElement(arr, n);

    return 0;
}
