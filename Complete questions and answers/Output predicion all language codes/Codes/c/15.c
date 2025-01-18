#include <stdio.h>
void fun()
{
    static int count = 0;
    printf("%d ", ++count);
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
// 1 2 3