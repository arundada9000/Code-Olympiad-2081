#include <stdio.h>

int main()
{
    int x = 5, y;
    y = x++ + ++x;
    printf("%d %d\n", x, y);
    return 0;
}

// Output:
// 7 12
