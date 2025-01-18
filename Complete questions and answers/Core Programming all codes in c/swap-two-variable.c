// Easy problem
/*
Swap two char variables without using a 3rd variable.
*/
#include <stdio.h>

int main()
{
    char a = 'A'; // ASCII 65
    char b = 'B'; // ASCII 66

    printf("Before swapping: a = %c, b = %c\n", a, b);

    a = a ^ b; // Step 1: a now holds the XOR of a and b
    b = a ^ b; // Step 2: b now holds the original value of a
    a = a ^ b; // Step 3: a now holds the original value of b

    /* //using addition and substraction
    a = a + b; // Step 1: a becomes the sum of a and b
    b = a - b; // Step 2: b becomes the original value of a
    a = a - b; // Step 3: a becomes the original value of b
    */

    /*  using multiplication and division
    a = a * b; // Step 1: a becomes the product of a and b
     b = a / b; // Step 2: b becomes the original value of a
     a = a / b; // Step 3: a becomes the original value of b
    */

    printf("After swapping: a = %c, b = %c\n", a, b);

    return 0;
}
