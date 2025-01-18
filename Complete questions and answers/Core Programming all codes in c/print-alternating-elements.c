/*
Print Alternating Elements
Write an algorithm to print every other element of an array starting from the first element.
*/
#include <stdio.h>
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i += 2)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}