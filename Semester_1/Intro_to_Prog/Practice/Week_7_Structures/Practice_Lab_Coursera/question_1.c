#include <stdio.h>

typedef struct Point
{
    int x;
    int y;
} point;

void main()
{
    point p1;
    point p2;

    p1.x = 3;
    p1.y = 2;
    p2.x = -1;
    p2.y = 5;
    printf("Enter the y-coordinatr f the first point: ");

    printf("The x-coordinate of the first point is %d and the y-coordinate is %d.\n", p1.x, p1.y);
    printf("The x-coordinate of the second point is %d and the y-coordinate is %d.\n", p2.x, p2.y);
}
