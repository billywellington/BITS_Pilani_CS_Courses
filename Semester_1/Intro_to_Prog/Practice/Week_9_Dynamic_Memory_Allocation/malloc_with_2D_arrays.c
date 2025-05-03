#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][2];

    for (int rows = 0; rows < 3; rows++)
    {
        for (int columns = 0; columns < 2; columns++)
        {
            array[rows][columns] = rows * 2;
        }
    }

    for (int rows = 0; rows < 3; rows++)
    {
        printf("{%d, %d}\n", array[rows][0], array[rows][1]);
    }
}