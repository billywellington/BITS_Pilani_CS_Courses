/**
 * @file main5.c
 * @brief Demonstrates basic array manipulation and iteration in C.
 *
 * This program initializes an integer array and assigns values to its elements
 * using a loop. It then prints the values of the array to the console.
 *
 * @note The code contains a logical error where the loop for assigning values
 *       to the array exceeds the bounds of the array (i.e., `i < 8` for an array
 *       of size 6). This results in undefined behavior due to out-of-bounds access.
 *
 * @author Billy Wellington
 * @date March 29, 2025
 */
#include <stdio.h>


int main()
{ 
    int arr[6]; 
    
    for (int i=0;i<8;i++){

    arr[i] = i;
    }
    
    for (int i=0;i<6;i++) 
    
    printf("%d\t", arr[i]);

return 0;
}

