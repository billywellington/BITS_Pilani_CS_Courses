/*
 * File: binary_search.c
 * Author: Billy Wellington
 * Date: 2026/01/13
 */

#include <stdio.h>

// int binarySearch(int array[], int target_ele, int len);

int binarySearch(int array[], int target_ele, int len) {
    int first_index = 0;
    int last_index = len - 1;
    int middle_index = 0, middle_ele = 0;


    while (first_index <= last_index) {
        middle_index = first_index + (last_index - first_index) / 2;
        middle_ele = array[middle_index];

        printf("Middle value: %d\n", middle_ele);
        if (middle_ele < target_ele) {
            first_index = middle_index + 1;
        } else if (middle_ele > target_ele) {
            last_index = middle_index - 1;
        } else {
            return middle_index;
        }
    }
    return -1;
}


int main(void) {
    int array[] = {1, 3, 5, 7, 9, 12, 15, 18, 21};
    int target = 16;

    //TODO: find the length of the array
    int length = sizeof(array) / sizeof(array[0]);


    printf("There are %d elements in the integer array.\n", length);

    int index = binarySearch(array, target, length);
    if (index == -1) {
        printf("Target %d not found!\n", target);
    } else {
        printf("Target: %d, found at index: %d\n", target, index);
    }


    return 0;
}
