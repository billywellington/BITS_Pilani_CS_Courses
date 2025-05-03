#include<stdio.h>

int main()
{
    int a = 10;
    while(a < 100)
    {
        if(a > 30) {
            continue;
        }
        printf("*");
        a++;
    }
    return 0;
}
