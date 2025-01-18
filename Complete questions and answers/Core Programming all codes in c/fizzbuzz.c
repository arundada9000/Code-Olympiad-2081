/*
Basic FizzBuzz problem
Write a program that prints numbers from 1 to N. But:

Print "Code" if the number is divisible by 3.
Print "Olympiad" if the number is divisible by 5.
Print "CodeOlympiad" if the number is divisible by both 3 and 5.
Otherwise, print the number itself.
*/
#include <stdio.h>

int CodeOlympiad(int N)
{
    for (int i = 1; i <= N; i++)
    {
        if (i % 15 == 0) // (i%5 == 0 && i%3 == 0)
            printf("CodeOlympiad\n");
        else if (i % 3 == 0)
            printf("Code\n");
        else if (i % 5 == 0)
            printf("Olympiad\n");
        else
            printf("%d\n", i);
    }
}

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    CodeOlympiad(N);

    return 0;
}

/*
More dense version with a constraint "Optimize it to minimize the number of conditions used"
void CodeOlympiad(int N)
{
    for (int i = 1; i <= N; i++)
    {
        Initialize an empty result string
        char result[10] = "";

         Concatenate "Fizz" if divisible by 3
        if (i % 3 == 0)
            strcat(result, "Code");

         Concatenate "Buzz" if divisible by 5
        if (i % 5 == 0)
            strcat(result, "Olympiad");

         If result is still empty, print the number; otherwise, print result
        if (result[0] == '\0')
            printf("%d\n", i);
        else
            printf("%s\n", result);
    }
}
*/