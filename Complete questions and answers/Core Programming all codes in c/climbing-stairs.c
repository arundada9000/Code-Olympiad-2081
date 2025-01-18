/*
DP problem 
 Count Ways to Climb Stairs
You are climbing a staircase with N steps. You can climb 1 or 2 steps at a time. Write a program to calculate the number of distinct ways to reach the top.

Example:
Input: N = 4 → Output: 5
*/

#include <stdio.h>

int countWaysToClimb(int N)
{
    // Base cases
    if (N == 0)
        return 1;
    if (N == 1)
        return 1;

    int dp[N + 1]; // Create an array to store the number of ways to reach each step
    dp[0] = 1;     // 1 way to stay at the ground (do nothing)
    dp[1] = 1;     // 1 way to reach the first step

    // Fill the dp array for steps 2 to N
    for (int i = 2; i <= N; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2]; // Sum of ways to reach i-1 and i-2 steps
    }

    return dp[N]; // The result is the number of ways to reach step N
}

int main()
{
    int N;

    printf("Enter the number of steps: ");
    scanf("%d", &N);

    int result = countWaysToClimb(N);
    printf("Number of ways to reach the top: %d\n", result);

    return 0;
}
