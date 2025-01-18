// vYou are given an array containing n-1 integers where each integer is in the range 1 to n. Find the missing number.
/*
for array of size n take n-1 elements in any order and find the missing one
Eg : For an array of size 5 with elements : 1,4,2,5 the missing element is 3
*/
#include <stdio.h>

int main()
{
    int n, input;

    printf("Enter n : ");
    scanf("%d", &n);

    int num[n + 1]; // +1 to handle 1 to n indexing directly

    for (int i = 1; i <= n; i++)
        num[i] = -1;

    for (int i = 1; i < n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &input);
        num[input] = input;
    }

    for (int i = 1; i <= n; i++)
    {
        if (num[i] == -1)
        {
            printf("\n%d is the missing number.\n", i);
            break;
        }
    }

    return 0;
}
