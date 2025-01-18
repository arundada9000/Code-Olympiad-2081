#include <stdio.h>
int main()
{
    int a = 5, b = 0;
    if (a && b++)
    {
        printf("Hello\n");
    }
    printf("%d\n", b);
    return 0;
}
// 1