#include <stdio.h>

int main()
{
    char ch, ch_2;

    printf("Press any key: ");
    ch = getchar();
    printf("You pressed: %c\n", ch);

    if ((ch_2 = getchar()) == '\n'){
        printf("The newline character was found on the buffer\n");
    }
}