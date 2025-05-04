/*
 ============================================================================
 Name        : file_append_example.c
 Author      : Billy Wellington
 Purpose     : This program appends text to an existing file called "mydata.txt".
               It uses C file handling functions to add new content without
               deleting existing data in the file.

 Structure   :
   1. Declare a FILE pointer.
   2. Open the file in append mode ("a").
   3. Check if the file opened successfully.
   4. Write new lines to the end of the file using fprintf.
   5. Close the file properly to save changes and free resources.
 ============================================================================
*/

#include <stdio.h>

int main()
{
  // Declare a file pointer
  FILE *filePtr;

  // Open "mydata.txt" in append mode
  // This keeps existing content and adds new text at the end
  filePtr = fopen("mydata.txt", "a");

  // Check if the file was opened successfully
  if (filePtr == NULL)
  {
    printf("Error opening file\n");
    return 1; // Return an error code
  }

  // Write new lines to the end of the file
  fprintf(filePtr, "This is an appended line.\n");
  fprintf(filePtr, "Another line added without erasing old content.\n");

  // Close the file to ensure data is saved properly
  fclose(filePtr);

  return 0; // Indicate successful program execution
}
