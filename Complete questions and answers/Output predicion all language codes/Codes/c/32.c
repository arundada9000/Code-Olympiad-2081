#include <stdio.h>

void recursive(int n)
{
    static int x = 1;
    if (n > 0)
    {
        printf("%d ", x++);
        recursive(n - 1);
    }
}

int main()
{
    recursive(5);
    return 0;
}

// Output:
// 1 2 3 4 5
