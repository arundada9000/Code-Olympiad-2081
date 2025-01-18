/*
Count Occurrences
Write a program to count the occurrences of a specific element in an array.
*/
#include <stdio.h>
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int element = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    printf("The element %d occurs %d times in the array.", element, count);
    return 0;
}