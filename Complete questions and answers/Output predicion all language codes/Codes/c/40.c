#include <stdio.h>

int main()
{
    char str[] = "Hello\0World";
    printf("%s\n", str);
    return 0;
}

// Output:
// Hello
