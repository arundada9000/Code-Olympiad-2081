#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;
    int **q = &p;
    printf("%d\n", **q);
    return 0;
}

// Output:
// 10
