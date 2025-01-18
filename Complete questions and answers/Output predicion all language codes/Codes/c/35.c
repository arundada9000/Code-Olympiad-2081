#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    printf("%d\n", *(arr + 2));
    return 0;
}

// Output:
// 30
