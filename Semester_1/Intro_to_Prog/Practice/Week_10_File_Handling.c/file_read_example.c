/*
 ============================================================================
 Name        : file_read_example.c
 Author      : Billy Wellington
 Purpose     : This program demonstrates how to read text from a file in C.
               It opens "mydata.txt" in read mode and prints its contents
               line by line to the console.

 Structure   :
   1. Declare a FILE pointer and a buffer to hold each line.
   2. Open the file in read mode ("r").
   3. Check if the file was successfully opened.
   4. Read the file line by line using fgets.
   5. Print each line to the screen.
   6. Close the file to free system resources.
 ============================================================================
*/

#include <stdio.h>

int main()
{
    FILE *filePtr;  // File pointer to manage the file
    char line[100]; // Buffer to store each line of the file

    // Open "mydata.txt" in read mode
    filePtr = fopen("mydata.txt", "r");

    // Check if the file opened successfully
    if (filePtr == NULL)
    {
        printf("Could not open file for reading\n");
        return 1; // Exit with error code if file could not be opened
    }

    // Read and print each line until end of file is reached
    while (fgets(line, sizeof(line), filePtr))
    {
        printf("%s", line); // Print the current line
    }

    // Close the file after reading is done
    fclose(filePtr);

    return 0; // Indicate successful execution
}
