#include <stdio.h>
#include <stdbool.h>

int main(){
    
        bool ans = true;
        printf("Welcome to the palindrome checker\n");
        int num, count = 0, digit;

        printf("Enter a number: ");
        scanf("%d", &num);
        //Write your code here
        digit = num;
        while (digit != 0)
        {
            digit = digit / 10;
            count++;
        }
        char numArray[count+1];
        char new_numArray[count+1];

        printf("The number after taking it from the user: %d\n\n", num);
    
        snprintf(numArray, sizeof(numArray), "%d", num);
        
        printf("The number of digits in the number is: %d\n", count);
    
        for (int i = 0; sizeof(numArray); i++){
            printf("%c ", numArray[i]);
        }
        printf("\nThe above print statement shows a succesful conversion from an int to a char array \n\n");

        for (int i = 0; sizeof(numArray); i++)
        {
            new_numArray[count-1] = numArray[i];
            count--;
        }

        printf("The reversed array is: ");
        for (int i = 0; sizeof(new_numArray); i++)
        {
            printf("%c ", new_numArray[i]);
        }
    
        // for (int n = 0; numArray[n] != '\0' && new_numArray[n] != '\0'; n++)
        // {
        //     if (numArray[n] == new_numArray[n])
        //     {
        //         ans = true;
        //         printf("\nThe number is a palindrome\n");
        //         printf("Old Arrray element %d: %c\n", n, numArray[n]);
        //         printf("New Array element %d: %c\n", n, new_numArray[n]);
        //         break;
        //     }
        //     else if (numArray[n] != new_numArray[n])
        //     {
        //         ans = false;
        //         printf("The number is not a palindrome\n");
        //         break;
        //     }
            
        // }
    }
