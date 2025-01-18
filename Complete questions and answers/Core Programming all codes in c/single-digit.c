// Given a number, repeatedly sum its digits until the result is a single digit.
#include <stdio.h>

int main()
{
    system("cls");

    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        printf("Intermediate sum: %d\n", sum);
        num = sum;
    } while (sum > 9);

    printf("Final single-digit sum: %d\n", sum);
    return 0;
}
/*
Eg ; for 119 first it will be 9 + 1 + 1 = 11 then 1 + 1 = 2 = single digit so stop
similarly 998
        = 9 + 9 + 8 = 26
        = 2 + 6 = 8 = single digit so stop 
*/