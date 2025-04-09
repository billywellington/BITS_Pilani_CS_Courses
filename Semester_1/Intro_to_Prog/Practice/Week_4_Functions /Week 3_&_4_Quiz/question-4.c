#include<stdio.h>

int main()
{
    int a;
    for(a = 20; a > 10; a--)
    {
        if(a > 15)
            continue;
        else
            break;
        printf("terminated");
    }
    
    return 0;
}
