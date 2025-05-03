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

    //finding the maximum number
    int max_num = *int_array;
    for (int i = 0; i < size_n; i++)
    {
        if (*(int_array + i) > max_num)
        {
            max_num = *(int_array + i);
        }
    }

    printf("\nThe maximum number of the elements in the array is : %d\n", max_num);

    free(int_array);
    return 0;
}