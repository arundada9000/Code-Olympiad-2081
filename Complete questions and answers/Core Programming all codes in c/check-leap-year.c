// Check Leap Year
#include <stdio.h>

int main()
{
    system("cls");
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
