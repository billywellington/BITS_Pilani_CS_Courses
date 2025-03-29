#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("%p\n", arr);
    printf("%d\n", arr[2]);
    printf("%p\n", (void *)&arr[1]);
    return 0;
}
