/*
 ============================================================================
 Name        : file_write_example.c
 Author      : Billy Wellington
 Purpose     : This program demonstrates how to write text to a file in C.
               It opens a file named "mydata.txt" in write mode,
               writes two lines of text to it, and then closes the file.

 Structure   :
   1. Declare a FILE pointer.
   2. Open the file in write mode.
   3. Check for errors during opening.
   4. Write lines using fprintf.
   5. Close the file properly.
 ============================================================================
*/

#include <stdio.h>

int main()
{
  // Declare a file pointer
  FILE *filePtr;

  // Open the file "mydata.txt" in write mode ("w")
  // This will create the file if it doesn't exist, or erase it if it does
  filePtr = fopen("mydata.txt", "w");

  // Check if the file was successfully opened
  if (filePtr == NULL)
  {
    printf("Error opening file\n");
    return 1; // Exit the program with error code
  }

  // Write two lines of text into the file
  fprintf(filePtr, "I am learning C file handling.\n");
  fprintf(filePtr, "This is the second line\n");

  // Close the file to ensure data is saved and resources are freed
  fclose(filePtr);

  return 0; // Indicate successful execution
}
