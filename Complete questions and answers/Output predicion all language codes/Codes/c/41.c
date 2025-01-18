#include <stdio.h>

void modify(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    modify(arr, 4);
    printf("%d\n", arr[2]);
    return 0;
}

// Output:
// 6
