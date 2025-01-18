/*
String Compression
Implement a function that compresses a string by replacing consecutive repeated characters with the character followed by the count. If the compressed string is not smaller than the original, return the original.

Example:
Input: "aabcccccaaa" → Output: "a2b1c5a3"
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to compress a string
char *compressString(const char *str)
{
    int len = strlen(str);
    char *compressed = (char *)malloc(2 * len + 1);
    int compressedIndex = 0;

    for (int i = 0; i < len;)
    {
        char currentChar = str[i];
        int count = 0;

        // Count consecutive occurrences of currentChar
        while (i < len && str[i] == currentChar)
        {
            count++;
            i++;
        }

        // Append the character and its count to the compressed string
        compressed[compressedIndex++] = currentChar;
        compressedIndex += sprintf(&compressed[compressedIndex], "%d", count);
    }

    compressed[compressedIndex] = '\0';
    return compressed;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *compressed = compressString(str);
    printf("Compressed string: %s\n", compressed);

    free(compressed); // Free the allocated memory
    return 0;
}
