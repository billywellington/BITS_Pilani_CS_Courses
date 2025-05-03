#include <stdio.h>


int main()
{
    // int num = 343455, digit = 343455, count = 0;
    int num, count = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    //Write your code here
    digit = num;
    while (digit != 0)
    {
        digit = digit / 10;
        count++;
    }
    printf("The number of digits in the number is: %d\n", count);
    char numArray[count+1];
    char new_numArray[count+1];
    printf("\nThe size of numArray is: %zu\n", sizeof(numArray));
    printf("The size of new_numArray is: %zu\n", sizeof(new_numArray));

    snprintf(numArray, sizeof(numArray), "%d", num);
    printf("\nThis is the new array:");

    for (int i = 0; numArray[i] != '\0'; i++)
    {
        printf("%c", numArray[i]);
    }

    for (int i = 0; numArray[i] != '\0';i++)
        {
            new_numArray[count-1] = numArray[i];
            count--;
        }
    
    printf("\nThis is the reversed array:");
    for (int i = 0; i < sizeof(new_numArray); i++)
    {
        printf("%c", new_numArray[i]);
    }
    printf("\n");

}