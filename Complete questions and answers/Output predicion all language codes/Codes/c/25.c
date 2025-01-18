#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4};
    int *ptr = arr;
    printf("%lu %lu\n", sizeof(arr), sizeof(ptr));
    return 0;
}

// Output:
// 16 8 (on a 64-bit system; size of array and pointer)
