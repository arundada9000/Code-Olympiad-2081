/*
Print Factors
Write a pseudo-code to print all factors of a given number.
*/
#include <stdio.h>

int main()
{
    system("cls");
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Factors are undefined for non-positive numbers.\n");
        return 0;
    }

    printf("Factors of %d are: ", num);

    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            if (i != num / i)
            {
                printf("%d ", num / i);
            }
        }
    }
    return 0;
}
