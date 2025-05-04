/*
 * Program: Write a line of text to a file using fputs()
 * Author: Billy Wellington
 *
 * Description:
 * This program demonstrates how to use the fputs() function to write a string
 * to a file named "example.txt". The program:
 * 1. Opens the file in write mode.
 * 2. Writes the sentence "I am learning C Programming Language!" to the file.
 * 3. Handles file open errors.
 * 4. Closes the file after writing.
 */

#include <stdio.h>

int main()
{
    // Declare a file pointer to handle the file
    FILE *filePtr;

    // Open the file "example.txt" in write mode
    filePtr = fopen("example.txt", "w");

    // Check if file opened successfully
    if (filePtr == NULL)
    {
        printf("File creation failed!\n");
        return 1; // Exit the program with error code 1
    }

    // Write a line of text to the file using fputs()
    fputs("I am learning C Programming Language!\n", filePtr);

    // Close the file to save changes and release resources
    fclose(filePtr);

    return 0; // Indicate successful execution
}
