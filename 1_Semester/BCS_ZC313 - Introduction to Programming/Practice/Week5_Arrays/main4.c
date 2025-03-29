#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    //n is the number of elements in the array
    //sizeof(arr) gives the total size of the array in bytes
    //sizeof(arr[0]) gives the size of one element in the array
    //so dividing the total size by the size of one element gives the number of elements
    //in the array

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
        //arr[i] is the ith element of the array
        }
    return 0;
}
