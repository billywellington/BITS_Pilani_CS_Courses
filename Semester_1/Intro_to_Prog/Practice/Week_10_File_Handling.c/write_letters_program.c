/*
 * Program: Write characters to a file using fputc()
 * Author: Billy Wellington
 * Description:
 * This simple C program demonstrates how to create a text file and write
 * characters to it one by one using the fputc() function. The program opens
 * a file named "letters.txt" in write mode. If the file opens successfully,
 * it writes the characters 'H', 'i', and '!' into the file.
 * The file is then properly closed.
 */

#include <stdio.h>

int main()
{
    // Declare a file pointer for handling the file
    FILE *filePtr;

    // Open the file "letters.txt" in write mode ("w")
    filePtr = fopen("letters.txt", "w");

    // Check if the file was opened successfully
    if (filePtr == NULL)
    {
        printf("File Creation Failed!!\n");
        return 1; // Exit the program with an error code
    }

    // Write individual characters to the file
    fputc('H', filePtr);
    fputc('i', filePtr);
    fputc('!', filePtr);

    // Close the file to save changes and free resources
    fclose(filePtr);

    return 0; // Indicate successful execution
}
