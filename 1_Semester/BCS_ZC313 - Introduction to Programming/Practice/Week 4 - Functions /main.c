#include <stdio.h>
#include "sum.h"
#include "sum.c"

int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The sum of the two numbers is: %d\n", sum(a, b));

    return 0;
}