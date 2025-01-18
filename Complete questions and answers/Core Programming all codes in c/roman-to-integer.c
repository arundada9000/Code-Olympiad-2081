#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to get the integer value of a Roman numeral
int romanToValue(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0; // Invalid character
    }
}

// Function to validate Roman numeral
int isValidRoman(char *s)
{
    int countI = 0, countX = 0, countC = 0, countM = 0; // Counters for repeatable symbols
    for (int i = 0; s[i] != '\0'; i++)
    {
        char current = s[i];
        char next = s[i + 1];

        // Check for invalid characters
        if (romanToValue(current) == 0)
            return 0;

        // Check for excessive repetitions
        if (current == 'I')
            countI++;
        else
            countI = 0;

        if (current == 'X')
            countX++;
        else
            countX = 0;

        if (current == 'C')
            countC++;
        else
            countC = 0;

        if (current == 'M')
            countM++;
        else
            countM = 0;

        if (countI > 3 || countX > 3 || countC > 3 || countM > 3)
            return 0; // Invalid repetition

        // Check for invalid subtraction rules
        if (current == 'I' && (next != 'V' && next != 'X' && romanToValue(next) > romanToValue(current)))
            return 0;
        if (current == 'X' && (next != 'L' && next != 'C' && romanToValue(next) > romanToValue(current)))
            return 0;
        if (current == 'C' && (next != 'D' && next != 'M' && romanToValue(next) > romanToValue(current)))
            return 0;
    }
    return 1; // Valid Roman numeral
}

// Function to convert Roman numeral to integer
int romanToInt(char *s)
{
    int total = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        int current = romanToValue(s[i]);
        int next = romanToValue(s[i + 1]);

        // Subtract if current value is smaller than next value
        if (current < next)
        {
            total += (next - current);
            i += 2; // Skip the next character
        }
        else
        {
            total += current;
            i++;
        }
    }

    return total;
}

int main()
{
    char roman[20];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    // Convert input to uppercase for consistency
    for (int i = 0; roman[i] != '\0'; i++)
        roman[i] = toupper(roman[i]);

    // Validate the Roman numeral
    if (isValidRoman(roman))
    {
        int result = romanToInt(roman);
        printf("Integer value: %d\n", result);
    }
    else
    {
        printf("Invalid Roman numeral.\n");
    }

    return 0;
}
