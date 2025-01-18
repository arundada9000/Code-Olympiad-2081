/*
 Sum of Digits
Write a pseudo-code to calculate the sum of the digits of a number.
*/
#include <stdio.h>

int main()
{
    system("cls");
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    num = num < 0 ? -num : num;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits of %d: %d\n", temp, sum);

    return 0;
}
