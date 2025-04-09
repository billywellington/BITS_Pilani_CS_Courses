#include <stdio.h>

int main(){

    // Variable 'a' is declared in the main function's scope, so it is accessible throughout the main function.
    int a = 5;

    // This block introduces a new scope.
    {
        // Variable 'b' is declared inside this block, so it is only accessible within this block.
        int b = 1;
        printf("The value of b inside a block: %d\n", b); // This works because 'b' is in scope here.
        printf("The value of a outside a block: %d\n", a); // This works because 'a' is in the outer scope.
    }

    // 'a' is still accessible here because it was declared in the main function's scope.
    printf("The value of a outside a block: %d\n", a);

    // This line will cause an error because 'b' is not accessible outside the block where it was declared.
    // To fix this, declare 'b' in the same scope as 'a' if it needs to be used here.
    printf("The value of b inside a block: %d\n", b);

    return 0;
}