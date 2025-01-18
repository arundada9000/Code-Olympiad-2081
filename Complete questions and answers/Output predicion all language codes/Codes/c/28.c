#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    p++;
    printf("%d\n", *p);
    return 0;
}

// Output:
// 20
