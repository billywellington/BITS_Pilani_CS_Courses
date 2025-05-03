#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size_n, *int_array = NULL;

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

    for (int i = 0; i < size_n; i++)
    {
        int_array[i] = i;
    }

    //accessing the values
    printf("\nHere's the array: ");

    for (int i = 0; i < size_n; i++)
    {
        printf("%d", *(int_array + i));
    }

    printf("\nNow let's expand our integer array");
    int new_size_n;
    printf("\nPlease enter the desired size of your integer array: ");
    scanf("%d", &new_size_n);

    //reallocate memory using realloc()
    int_array = (int *)realloc(int_array, new_size_n * sizeof(int));

    if (int_array == NULL)
    {
        printf("\nMemory reallocation failed!");
        return 1;
    }

    //populate the array

    for (int i = 0; i < new_size_n; i++)
    {
        int_array[i] = i;
    }

    //accessing the values
    printf("\nThis is the new expanded array: ");

    for (int i = 0; i < new_size_n; i++)
    {
        printf("%d", *(int_array + i));
    }
    printf("\n");

    free(int_array);
    return 0;
}