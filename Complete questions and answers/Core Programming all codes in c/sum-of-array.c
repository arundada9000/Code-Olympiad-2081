// Easy Problem
// Return the sum of an array

#include <stdio.h>
int main()
{
    system("cls");
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        sum += array[i];
    }
    printf("Sum of array : %d", sum);
    return 0;
}