/*
Power of Two
Write a program to check whether a given number N is a power of two.

Example:
Input: 16 → Output: True (since2^4=16)
Input: 18 → Output: False
*/
#include <stdio.h>

int isPowerOfTwo(int N)
{
    return (N > 0 && (N & (N - 1)) == 0);
}

int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (isPowerOfTwo(N))
        printf("%d is a power of two.\n", N);
    else
        printf("%d is not a power of two.\n", N);

    return 0;
}

/* Brute Force
int isPowerOfTwo(int N)
{
    if (N <= 0)
        return 0; // Negative numbers and zero are not powers of two

    while (N > 1)
    {
        if (N % 2 != 0) // If not divisible by 2, it's not a power of two
            return 0;
        N /= 2;
    }
    return 1; // If we reach 1, it's a power of two
}
*/