#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *int_array = NULL, size = 10;

    //allocate memory using malloc()
    int_array = (int *)malloc(size * sizeof(int));

    if (int_array == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    //populate the array

    for (int i = 0; i < size; i++)
    {
        int_array[i] = i + 10;
    }

    //accessing the values
    for (int i = 0; i < size; i++)
    {
        printf("The element at indice %d is : %d\n", i, *(int_array + i));
    }

    free(int_array);
    return 0;
}