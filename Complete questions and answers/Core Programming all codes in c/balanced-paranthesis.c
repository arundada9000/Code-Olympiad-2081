// Q1.Write a program to check if a string containing parentheses is balanced.

#include <stdio.h>
#include <string.h>

int main()
{
    system("cls");

    char parenthesis[100];
    printf("Enter a string of parentheses: ");
    scanf("%s", parenthesis);

    int length = strlen(parenthesis);
    int count = 0;

    printf("Parenthesis = %s, Length = %d\n", parenthesis, length);

    for (int i = 0; i < length; i++)
    {
        if (parenthesis[i] == '(')
        {
            count++;
        }
        else if (parenthesis[i] == ')')
        {
            count--;
            if (count < 0)
            {
                printf("\nNot balanced\n");
                return 0;
            }
        }
    }

    if (count == 0)
        printf("\nBalanced\n");

    else
        printf("\nNot balanced\n");

    return 0;
}
/*
Eg: checks :
Balanced :
()
(())
(()())
((()))
()()()
(()(()))

Unbalanced :
(
)
(()
())
)()( (incorrect order)
((()) (missing closing parenthesis)
())(() (mismatched pairs)
*/