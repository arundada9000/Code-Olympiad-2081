/* For a given string return the first non-repeating character or -1 if none.
For Pooja , p will be returned
For a given string swiss, w will be returned
For tomato , m will be returned and so on
Hard question
*/
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char firstNonRepeatingChar(char *str)
{
    int freq[MAX_CHAR] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (freq[str[i]] == 1)
        {
            return str[i];
        }
    }

    return -1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char result = firstNonRepeatingChar(str);
    if (result != -1)
    {
        printf("The first non-repeating character is: %c\n", result);
    }
    else
    {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
