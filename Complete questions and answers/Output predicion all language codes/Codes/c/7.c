#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    printf("%d\n", *(ptr + 1));
    return 0;
}

// 20
/*
Here, ptr is initialized to point to the first element of the array (arr[0]). In C, when an array is used without brackets (like arr), it decays to a pointer to its first element.
*/