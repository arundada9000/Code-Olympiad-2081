/*
 Replace Vowels
Write a pseudo-code to replace all vowels in a string with a * character
*/
#include <stdio.h>
#include <string.h>
int main()
{
    system("cls");
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = '*';
        }
    }
    printf("%s", str);
    return 0;
}