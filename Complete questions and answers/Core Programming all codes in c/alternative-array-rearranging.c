/*
Rearrange Array Alternately
Problem Statement:
Rearrange an array such that the maximum element is followed by the minimum element, then the second maximum, and so on.
eg: For a Given array 1,2,3,4,5,6.7.8 output must be 8 1 7 2 6 3 5 4
    for array 3,2,1,5,6,8,7,4,9 output will be 9 1 8 2 7 3 6 4 5
*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    system("cls");
    int array[] = {7, 8, 1, 2, 3, 4, 5, 6, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int newArray[n];

    qsort(array, n, sizeof(int), compare);

    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            newArray[i] = array[r--];
        }
        else
        {
            newArray[i] = array[l++];
        }
    }

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", newArray[i]);

    return 0;
}
