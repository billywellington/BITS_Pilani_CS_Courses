/**
 * Program: getchar.c
 * Purpose: Demonstrates how getchar() reads a single character,
 *          and how to clear the input buffer afterwards using a while loop.
 * Author: Billy 
 * Date: 03 May 2025
 */

#include <stdio.h>

int main()
{
    char ch, ch_2;

    // Prompt the user to press any key
    printf("Press any key: ");

    // Read the first character using getchar()
    ch = getchar();

    // Clear any remaining characters in the input buffer (like newline '\n')
    // The loop reads characters one by one until it finds a newline or EOF
    while ((ch_2 = getchar()) != '\n' && ch_2 != EOF)
        ; // This is an empty statement (does nothing but is needed for the loop to work)

    // Print the character that was originally pressed
    printf("You pressed: %c\n", ch);

    return 0;
}
