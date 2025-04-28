#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size_n, *int_array = NULL;

    printf("Enter the desired size of your integer array: ");
    scanf("%d", &size_n);

    //allocate memory using malloc()
    int_array = (int *)calloc(size_n, sizeof(int));

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