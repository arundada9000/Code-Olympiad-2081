#include <stdio.h>

int main()
{
    int a = 0, b = 1;
    if (a && b++)
        printf("Inside If\n");
    printf("%d\n", b);
    return 0;
}

// Output:
// 1
