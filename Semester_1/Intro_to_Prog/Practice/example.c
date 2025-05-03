#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int n = a; (a <= n <= b); n++)
    {
     if (n == 8)
    printf("eight");
    
    else if (n == 9)
    printf("nine");
    
    else if (n > 9 && (n % 2 == 0))
    printf("even");
    
    else
     printf("odd");
    }

    return 0;
}

