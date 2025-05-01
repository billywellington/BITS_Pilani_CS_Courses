#include <stdio.h>
#include <string.h>

/*
    This program asks the user to enter their name,
    then removes the newline character added by fgets(),
    and finally displays the cleaned-up name.
*/

int main()
{
    char name[20]; // Declare a character array to store the user's name

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin); // Read input from user (with newline if input is shorter than 19 chars)

    /*
        Remove the newline character from the input if it exists.
        fgets() includes the newline if there's room in the array.
        We check if the last character is '\n' and replace it with '\0'.
    */
    size_t len = strlen(name); // Get the length of the input string (excluding null terminator)

    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0'; // Replace the newline with null terminator
    }

    // Print the cleaned-up name
    printf("Your name is: %s\n", name);

    return 0;
}
