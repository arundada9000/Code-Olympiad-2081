#include <stdio.h>
int main()
{
    int num = 2;
    switch (num)
    {
    case 1:
        printf("One ");
    case 2:
        printf("Two ");
    case 3:
        printf("Three ");
    default:
        printf("Default");
    }
    return 0;
}
// Two Three Default
