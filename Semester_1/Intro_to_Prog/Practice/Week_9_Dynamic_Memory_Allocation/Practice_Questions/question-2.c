#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size_n, *int_array = NULL, value;

    printf("Enter the desired size of your integer array: ");
    scanf("%d", &size_n);

    //allocate memory using malloc()
    int_array = (int *)malloc(size_n * sizeof(int));

    if (int_array == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    //populate the array
    printf("Please populate your interger array.\nOnly enter integers.\n");

    for (int i = 0; i < size_n; i++)
    {
        printf("\nEnter a number:");
        scanf("%d", &value);
        int_array[i] = value;
    }

    //summing the elemnts altogether
    int sum = 0;
    for (int i = 0; i < size_n; i++)
    {
        sum += int_array[i];
    }

    printf("\nThe sum of the elements altogether is : %d\n", sum);

    free(int_array);
    return 0;
}