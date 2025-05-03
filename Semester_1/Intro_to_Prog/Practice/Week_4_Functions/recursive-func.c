#include <stdio.h>

int func(int a, int b)
{
    int num1, num2;
    num1 = a;
    num2 = b;
    int new_a, new_b;
    if (b == 0)
    {
        printf("The GCD of the %d and %d is: %d\n", num1, num2, num1);
        return 0; // This line is not necessary, but it is good practice to include it
    }
    else
    {
        new_a = b;
        new_b = a % b;
        func(new_a, new_b);
    }
    return 0;
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    func(a, b);

    return 0;
}