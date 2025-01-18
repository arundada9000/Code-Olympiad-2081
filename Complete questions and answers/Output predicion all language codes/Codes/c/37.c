#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i == j)
                continue;
            printf("%d%d ", i, j);
        }
    }
    return 0;
}

// Output:
// 12 13 21 23 31 32
