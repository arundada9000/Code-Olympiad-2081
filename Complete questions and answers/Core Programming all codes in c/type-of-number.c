/*
Count Positive, Negative, and Zeros
Write an algorithm to count how many positive, negative, and zero values are in a given list of integers.
*/
#include <stdio.h>
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -1, -2, -3, -4, -5, -6, -7, -8, -9};
    int positive = 0, negative = 0, zero = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive: %d\nNegative: %d\nZero: %d\n", positive, negative, zero);
    return 0;
}