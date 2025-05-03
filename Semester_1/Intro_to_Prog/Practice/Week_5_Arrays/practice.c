#include <stdio.h>
int main()
{
    int numArray[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter an integer number: ");
        scanf("%d", &numArray[i]);
        if (i>= 10)
        {
            printf("Array is full\n");
            break;
        }
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += numArray[i];
    }
    printf("Sum of the array elements: %d\n",sum);
    return 0;
}