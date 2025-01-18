#include <stdio.h>
void fun(int a, int b)
{
    a += b;
    b += a;
    printf("%d %d\n", a, b);
}
int main()
{
    int x = 5, y = 10;
    fun(x, y);
    printf("%d %d\n", x, y);
    return 0;
}
/*
15 25
5 10
*/