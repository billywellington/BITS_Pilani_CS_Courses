#include <stdio.h>

void main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    printf("\n%d\n", *(arr + 0));
    printf("%d\n", *arr);
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(arr + 2));
    printf("%d\n", *(arr + 3));
    printf("%d\n", *(arr + 4));
}