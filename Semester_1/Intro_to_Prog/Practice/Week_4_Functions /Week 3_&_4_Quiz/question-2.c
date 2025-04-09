#include<stdio.h>

int main()
{
    char ch = 'B';
    switch(ch)
    {
        case 'A':
            printf("A \n");
        case 'B':
            printf("B \n");
        case 'C':
            printf("C\n");
        case 'D':
            printf("D\n");
        case 'E':
            printf("E\n");
        default:
            printf("This is the default statement\n");
    }
    return 0;
}
