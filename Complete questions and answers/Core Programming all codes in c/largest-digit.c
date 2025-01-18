/*
Find Largest Digit
Write an algorithm to find the largest digit in a given number.
*/
#include <stdio.h>
int main()
{
    system("cls");
    int num, largest = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int digit = num % 10;
        if (digit > largest)
            largest = digit;

        num /= 10;
    }

    printf("Largest digit is %d\n", largest);
    return 0;
}