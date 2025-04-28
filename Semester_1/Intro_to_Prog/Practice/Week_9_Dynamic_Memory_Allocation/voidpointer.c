#include <stdio.h>

int main()
{
    void *ptr; // A void pointer

    int x = 5;
    ptr = &x; // ptr stores the address of an integer

    // To use the value of x, cast ptr to int*
    printf("Value of x: %d\n", *ptr);

    char y = 'A';
    ptr = &y; // Now ptr stores the address of a char

    // To use the value of y, cast ptr to char*
    printf("Value of y: %c\n", *(char *)ptr);

    return 0;
}
