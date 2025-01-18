// Sum of N Natural Numbers
#include <stdio.h>
int main()
{
    system("cls");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers is %d\n", num, num * (num + 1) / 2);

    return 0;
}