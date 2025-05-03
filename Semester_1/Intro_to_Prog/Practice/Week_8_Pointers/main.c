#include <stdio.h>

int yearCalc(int age, int year){
    return year - age;

}

void main(){
    int age = 28;
    int *pAge = &age;

    // printf("The value of age is : %d\n", age);
    // printf("The address of age is %p\n", &age);
    // printf("The value of pAge is %p\n", pAge);
    // printf("The value found at the address of pAge is %d\n", *pAge);

    int year;
    printf("What is the current year: ");
    scanf("%d", &year);

    printf("Since you're %d years old in %d, therefore, you were born in %d\n", age, year, yearCalc(age, year));
}
