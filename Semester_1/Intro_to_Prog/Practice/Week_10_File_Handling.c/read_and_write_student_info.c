#include <stdio.h>

/*
 * Program: read_and_write_student_info.c
 * ---------------------------------------
 * This program demonstrates how to write data to a file and then read
 * it back using `fscanf()` and `fprintf()`. The program:
 * 1. Creates a file called "student.txt" and writes the student's name and age.
 * 2. Opens the file for reading, extracts the student's name and age.
 * 3. Prints the extracted data to the console.
 *
 * Purpose:
 * - Show how to write and read structured data (name and age) from a file.
 * - Handle file opening, reading, and writing with proper error checking.
 */

int main()
{
    // Step 1: Create a file and write the student's name and age
    FILE *filePtrWrite;                       // Declare file pointer for writing
    filePtrWrite = fopen("student.txt", "w"); // Open file in write mode

    if (filePtrWrite == NULL) // Check if file creation failed
    {
        printf("File creation failed!\n");
        return 1; // Exit the program with error code 1
    }

    // Write the string "Name: Billy Age: 21" to the file
    fprintf(filePtrWrite, "Name: Billy Age: 21");
    fclose(filePtrWrite); // Close the file after writing

    // Step 2: Open the file for reading
    FILE *filePtrRead;                       // Declare file pointer for reading
    filePtrRead = fopen("student.txt", "r"); // Open file in read mode

    if (filePtrRead == NULL) // Check if file reading failed
    {
        printf("File reading failed!\n");
        return 1; // Exit the program with error code 1
    }

    // Step 3: Declare variables to store the extracted data (name and age)
    int studentAge;       // Variable to store student's age
    char studentName[20]; // Array to store student's name

    // Step 4: Read the name and age from the file using fscanf()
    fscanf(filePtrRead, "Name: %s Age: %d", studentName, &studentAge);

    // Step 5: Print the extracted data
    printf("Student Name: %s.\n", studentName); // Print the student's name
    printf("Student Age: %d.\n", studentAge);   // Print the student's age

    fclose(filePtrRead); // Close the file after reading

    return 0; // Indicate successful execution
}
