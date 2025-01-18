#include <stdio.h>

int fun()
{
    return 1, 2, 3; // Comma operator
}

int main()
{
    printf("%d\n", fun());
    return 0;
}

// Output:
// 3
