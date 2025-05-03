#include <stdio.h>

int main()
{
    int x = 5;
    printf("The value of x before incrementing: %d\n", x);
    int y = ++x;  // Increment x before assigning it to y.
    printf("x = %d, y = %d\n", x, y);
    return 0;
}