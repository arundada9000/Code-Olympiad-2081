// Check if Array is Sorted
#include <stdio.h>
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            printf("Array is not sorted\n");
            return 0;
        }
    }
    printf("Array is sorted\n");
    return 0;
}