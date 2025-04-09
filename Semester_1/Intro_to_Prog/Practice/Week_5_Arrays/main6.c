#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};

    int b, c;

    b = arr1[0]++;
    printf("arr1[0] = %d\n", arr1[0]);

    c = arr1[0]++;
    arr1[1]++;

    //print the values of arr1[0] and arr1[1]
    printf("arr1[1] = %d\n", arr1[1]);

    //print the values of b and c/
    printf("b = %d\n", b);

    printf("c = %d\n", c);


    //print the values of arr1[0]
    printf("arr1[0] = %d\n", arr1[0]);

}