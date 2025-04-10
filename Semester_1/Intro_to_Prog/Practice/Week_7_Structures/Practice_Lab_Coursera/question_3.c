#include <stdio.h>

typedef struct Distance
{
    int km;
    int mtrs;
} distance;

typedef struct Difference
{
    int difference;
} difference;

void main()
{
    distance d1;
    distance d2;
    difference diff;

    printf("Enter the first distance in km and mtrs: ");
    scanf("%d %d", &d1.km, &d1.mtrs);
    printf("\n\nEnter the second distance in km and mtrs: ");
    scanf("%d %d", &d2.km, &d2.mtrs);

    diff.difference = (d2.km * 1000 + d2.mtrs) - (d1.km * 1000 + d1.mtrs);

    printf("\n\nThe difference is = %d kilometers and %d meters.\n", diff.difference / 1000, diff.difference % 1000);
}