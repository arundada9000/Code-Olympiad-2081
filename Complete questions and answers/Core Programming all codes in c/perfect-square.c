/*
Check for Perfect Square
Write a pseudo-code to check if a given number is a perfect square.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    system("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int root = sqrt(num);
    if (root * root == num)
        printf("%d is a perfect square.\n", num);

    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}