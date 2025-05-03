#include <stdio.h>
#include <stdlib.h>

/**
 * This program simulates a bookshelf using dynamic 2D arrays in C.
 * Each row represents a shelf, and each column in a row represents a book slot.
 * We use dynamic memory allocation to allow the user to decide
 * how many shelves (rows) and how many book slots (columns) they want.
 */

int main()
{
    int **bookshelf; // Double pointer for dynamic 2D array (bookshelf)
    int num_rows;    // Number of rows (shelves)
    int num_columns; // Number of columns (books per shelf)
    int ch;          // Temporary variable to clear input buffer

    // Ask user how many shelves (rows) they want
    printf("Please enter the desired number of shelves: ");
    scanf("%d", &num_rows);

    // Clear leftover newline character from input buffer
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;

    // Allocate memory for the bookshelf — an array of row pointers
    bookshelf = (int **)malloc(num_rows * sizeof(int *));
    if (bookshelf == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Ask user how many books per shelf (columns) they want
    printf("Please enter the desired number of books per shelf: ");
    scanf("%d", &num_columns);

    // Clear leftover newline character again
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;

    /**
     * Allocate memory for each shelf.
     * Each shelf (row) gets its own block of memory to hold book IDs (integers).
     */
    for (int i = 0; i < num_rows; i++)
    {
        bookshelf[i] = (int *)malloc(num_columns * sizeof(int));
        if (bookshelf[i] == NULL)
        {
            printf("Memory allocation failed for shelf %d!\n", i + 1);
            return 1;
        }
    }

    /**
     * Populate the bookshelf with dummy book IDs.
     * Book ID is just a computed value for now: (i + j + 1) * 121
     */
    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_columns; j++)
        {
            bookshelf[i][j] = (i + j + 1) * 121;
        }
    }

    // Display the bookshelf
    printf("\n******** MY BOOKSHELF ********\n\n");
    for (int i = 0; i < num_rows; i++)
    {
        printf("Shelf #%d:\n Book IDs: ", i + 1);
        for (int j = 0; j < num_columns; j++)
        {
            printf("%d ", bookshelf[i][j]);
        }
        printf("\n");
    }

    // Free memory allocated for each shelf
    for (int i = 0; i < num_rows; i++)
    {
        free(bookshelf[i]);
    }

    // Free memory allocated for the bookshelf itself
    free(bookshelf);

    return 0;
}
