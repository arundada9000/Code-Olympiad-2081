/*
 Reverse an Integer
Given an integer X, reverse its digits without converting it into a string.

Example:
Input: 1234 → Output: 4321
Input: -567 → Output: -765
*/
#include <stdio.h>

int reverseInteger(int X)
{
    int reversed = 0;

    while (X != 0)
    {
        int lastDigit = X % 10;
        reversed = reversed * 10 + lastDigit;
        X = X / 10;
    }

    return reversed;
}

int main()
{
    system("cls");
    int X;
    printf("Enter an integer: ");
    scanf("%d", &X);

    int reversed = reverseInteger(X);
    printf("Reversed Integer: %d\n", reversed);

    return 0;
}
