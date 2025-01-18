/*
Count Set Bits in an Integer
Write a program to count the number of 1s in the binary representation of a given integer.

Example:
Input: 5 → Binary: 101 → Output: 2
Input: 10 → Binary: 1010 → Output: 2
Input: 500 → Binary: 111110100 → Output: 6

*/
#include <stdio.h>

int countSetBits(int num)
{
    int count = 0;

    while (num > 0)
    {
        if (num % 2 == 1)
            count++;

        num = num / 2;
    }

    return count;
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int setBits = countSetBits(num);

    printf("Number of 1s in binary representation of %d: %d\n", num, setBits);

    return 0;
}

// Replace the code inside while loop with these to test

/*      Better => works faster because works on hardware level
        count += num & 1;  // Check if the least significant bit is 1
        num >>= 1;         // Right shift to process the next bit
*/

/*
     Best => Brian Kernighan's Algorithm
    num &= (num - 1);  // Clear the least significant 1 bit
    count++;
*/