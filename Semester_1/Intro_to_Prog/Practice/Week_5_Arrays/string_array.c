#include <stdio.h>

int main() {
    char source[] = {'H', 'e', 'l', 'l', 'o'};
    char destination[5];  // Array to hold the copied elements
    int j = 5;

    // Copy each element from source to destination
    for (int i = 0; i < 5; i++) {
        destination[j-1] = source[i];
        j--;
    }

    // Print the destination array elements
    for (int i = 0; i < 5; i++) {
        printf("%c ", destination[i]);
    }
    printf("\n");  // Output: H e l l o

    return 0;
}
