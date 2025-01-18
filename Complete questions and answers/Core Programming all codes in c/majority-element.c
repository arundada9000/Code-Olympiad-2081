/*
Majority Element
Problem Statement:
Find the element that appears more than n/2 times in an array. Assume such an element always exists.
Eg: In a given array 1,1,2,1,2 return 1
*/
#include <stdio.h>

int findMajorityElement(int arr[], int n)
{
    int candidate = arr[0], count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    // Phase 2: Return the candidate (guaranteed to be valid as per problem)
    return candidate;
}

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2, 3, 4, 5, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = findMajorityElement(arr, n);
    printf("Majority Element: %d\n", majorityElement);

    return 0;
}
