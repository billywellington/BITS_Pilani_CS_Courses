/*
* File: linear_search.c
 * Author: Billy Wellington
 * Date: 2026/01/08
 */

#include <stdio.h>

int linearSearch(int array[],int length, int key) {

    for (int i = 0; i < length; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;

}

int main(void) {
    int array[] = {2, 5, 7, 3, 5, 8, 6, 9, 1};
    int length = 0;

    //TODO: find the length of the array
    for (int i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
        length++;
    }

    int index = linearSearch(array, length , 9);

    if (index > 0 ){
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not Found");
    }
    return 0;
}