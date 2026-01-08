/*
 * File: main.c
 * Author: billy
 * Date: 2026/01/03
 */

#include <stdio.h>

int main(void) {
    FILE *file = fopen("example.txt","r");
    if (file != NULL) {
        char buffer[100];
        while (fgets(buffer, sizeof(buffer), file) != NULL){
            printf("Data processed from the file :\n");
            printf(" %s\n", buffer);


        }
        fclose(file);
    }
    return 0;
}