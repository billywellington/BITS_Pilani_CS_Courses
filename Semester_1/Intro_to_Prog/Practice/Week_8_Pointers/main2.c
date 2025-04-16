#include <stdio.h>
#define YEAR 2025

int yearCalc(int age, int *pAge){
    *pAge = 27;
    
    return YEAR - *pAge;
}

void main(){
    int age = 28;
    int *pAge = &age;

    // int year;
    // printf("What is the current year: ");
    // scanf("%d", &year);
    printf("The age before calling the function is: %d\n", *pAge);

    printf("Since you're %d years old in %d, therefore, you were born in %d\n", age, YEAR, yearCalc(age, pAge));
}
