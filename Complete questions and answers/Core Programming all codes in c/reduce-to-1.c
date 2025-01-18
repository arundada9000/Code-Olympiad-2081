/*
Given a positive integer n, find the minimum number of operations required to reduce n to 1. You can perform three operations :

    Subtract 1 from n.
    If n is divisible by 2,divide n by 2.
    If n is divisible by 3, divide n by 3.
*/
#include <stdio.h>
#include <limits.h>

int minOperations(int n)
{
    int dp[n + 1]; // Array to store the minimum operations for each number
    dp[1] = 0;     // Base case: It takes 0 operations to reduce 1 to 1

    for (int i = 2; i <= n; i++)
    {
        // Start with the operation of subtracting 1
        int min_ops = dp[i - 1];

        // If divisible by 2, consider the divide by 2 operation
        if (i % 2 == 0)
        {
            min_ops = (min_ops < dp[i / 2]) ? min_ops : dp[i / 2];
        }

        // If divisible by 3, consider the divide by 3 operation
        if (i % 3 == 0)
        {
            min_ops = (min_ops < dp[i / 3]) ? min_ops : dp[i / 3];
        }

        // Store the result for dp[i]
        dp[i] = 1 + min_ops;
    }

    return dp[n];
}

int main()
{
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Minimum number of operations to reduce %d to 1: %d\n", n, minOperations(n));

    return 0;
}
