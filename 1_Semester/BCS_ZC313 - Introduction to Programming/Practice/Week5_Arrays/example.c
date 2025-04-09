#include <stdio.h>

int main() {
    int digit = 4;
    char str[2];

    snprintf(str, sizeof(str), "%d", digit);
    int i;
    // int count = 0;
    for (i = 0; str[i] != '\0'; i++) 
    {
        printf("%c\n", str[i]);
        // if (str[i] == '5') {
        //     count++;
        // }
    }
    //print the array
    printf("This should print the first index: %c\n", str[0]);
    printf("This is the null terminator: %c", str[1]);

    //print that the prgram is finushed after prinut fing the array
    printf("The program is finished after printing the array\n");

    // printf("The digit 5 appears %d times in the number %d\n", count, digit);
    return 0;
}


