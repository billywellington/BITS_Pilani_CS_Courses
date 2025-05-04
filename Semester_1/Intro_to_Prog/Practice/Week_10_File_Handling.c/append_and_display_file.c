#include <stdio.h>

/*
 * Program: append_and_display_file.c
 * -----------------------------------
 * This program opens a text file called "data.txt" in append and read mode ("a+").
 * It does the following:
 * 1. Reads and displays each character already in the file (with a newline after each character).
 * 2. Appends a single character 'N' to the end of the file.
 * 3. Then closes the file properly.
 *
 * Notes:
 * - The "a+" mode allows both reading and appending.
 * - It is useful for logging or modifying files while preserving existing content.
 */

int main()
{
    FILE *file = fopen("data.txt", "a+"); // Open file for reading and appending

    if (file == NULL) // Check if file was opened successfully
    {
        printf("Error opening file\n");
        return 1; // Exit the program if file could not be opened
    }

    int currentChar;

    // Read each character from the file and print it with a newline after
    while ((currentChar = fgetc(file)) != EOF)
    {
        putchar(currentChar); // Print the character
        putchar('\n');        // Print newline for clarity
    }

    // Append character 'N' to the end of the file
    fputc('N', file);

    // Close the file
    fclose(file);

    return 0;
}
