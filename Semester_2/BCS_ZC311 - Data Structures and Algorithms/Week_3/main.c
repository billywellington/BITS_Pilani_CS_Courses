/*
* File: linear_search.c
 * Author: Billy Wellington
 * Date: 2026/01/08
 */

#include <stdio.h>

void  linearSearch(int array[], int key) {

    for (int i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
       printf("%d ", array[i]);
    }

}

int main(void) {
    int array[] = {2, 5, 7, 3, 5, 8, 6, 9, 1};
    linearSearch(array, 8);
    // if (index > 0 ){
    //     printf("Element found at index: %d\n", index);
    // } else {
    //     printf("Element not Found");
    // }
    return 0;
}