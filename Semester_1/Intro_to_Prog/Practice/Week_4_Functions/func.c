#include <stdio.h>

void func(int a, int b, int original_a, int original_b)
{
    if (b == 0)
    {
        printf("The GCD of %d and %d is: %d\n", original_a, original_b, a);
        return;
    }
    else
    {
        func(b, a % b, original_a, original_b);
    }
}

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Pass original values along with a and b
    func(a, b, a, b);

    return 0;
}
