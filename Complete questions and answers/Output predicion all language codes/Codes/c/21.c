#include <stdio.h>
void fun()
{
    static int x = 0;
    if (x < 5)
    {
        printf("%d ", x);
        x++;
        fun();
    }
}
int main()
{
    fun();
    return 0;
}
// 0 1 2 3 4