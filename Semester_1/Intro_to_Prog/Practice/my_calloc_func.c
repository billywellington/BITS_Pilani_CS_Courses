#include <stdio.h>
#include <stdlib.h>

void *my_calloc(int num, int size);

int main()
{
    int size_n, *int_array = NULL;

    printf("Enter the desired size of your integer array: ");
    scanf("%d", &size_n);

    //allocate memory using malloc()
    int_array = (int *)my_calloc(size_n, sizeof(int));

    if (int_array == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    //accessing the values
    for (int i = 0; i < size_n; i++)
    {
        printf("The element at indice %d is : %d\n", i, *(int_array + i));
    }

    free(int_array);
    return 0;
}

void *my_calloc(int num, int size)
{
    /**
 * my_calloc - Allocates memory for an array of elements and initializes it to zero.
 * @num:  The number of elements to allocate.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory initialized to zero,
 *         or NULL if the allocation fails.
 */

    int *ptr = NULL;

    ptr = malloc(num * size);
    if (ptr == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < num; i++)
    {
        ptr[i] = 0;
    }

    return ptr;
}