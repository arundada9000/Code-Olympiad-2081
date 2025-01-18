// Count Digits in a Number
#include <stdio.h>
int main()
{
    system("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Special case for zero
    if (num == 0)
    {
        printf("Number of digits: 1\n");
        return 0;
    }

    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
