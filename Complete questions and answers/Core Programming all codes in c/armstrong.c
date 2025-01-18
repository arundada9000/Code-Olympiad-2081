/*
Test if a given number is an armstrong number
An Armstrong number (or Narcissistic number) is a number that is equal to the sum of its own digits raised to the power of the number of digits.
153 = 1^3 + 5^3 + 3^3
9474 = 9^4 + 4^4 + 7^4 + 4^4

Single-digit numbers: All single-digit numbers are Armstrong numbers because 𝑑^1=𝑑.
*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int num)
{
    int originalNum = num, sum = 0, n = 0;

    while (num != 0)
    {
        n++;
        num /= 10;
    }

    num = originalNum;

    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    system("cls");
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
