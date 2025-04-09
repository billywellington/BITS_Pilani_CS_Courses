#include <stdio.h>

int func()
{
        static int i = 0; // Declare and initialize 'i'
        i += 10;   // Increment 'i' by 10
        printf("i = %d\n", i); // Print the value of 'i'
        return 0;  
}

int main()
{
    int j; // Declare and initialize 'j'
    for (j = 0; j < 5; j++)// Loop 5 times
    {
        func(); // Call the function 'func'
    }
    return 0;
}