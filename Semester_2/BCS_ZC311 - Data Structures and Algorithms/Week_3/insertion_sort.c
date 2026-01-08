//
// Created by billy on 2026/01/08.
//

#include <stdio.h>
void insertion_sort(int array[], int n);

void insertion_sort(int array[], int n) {

    for (int i = 1; i < n ; i ++) {

        int temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;


    }

}

void main() {
    int array[] = {8, 3, 1, 4, 5};
    int n = 5;

    printf("My original array: ");
    for (int i = 0; i < n ; i ++) {
        printf("%d ", array[i]);
    }

    insertion_sort(array, n);
    printf("\nMy sorted array: ");
    for (int i = 0; i < n ; i ++) {
        printf("%d ", array[i]);
    }

}
