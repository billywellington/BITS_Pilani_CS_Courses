//
// Created by billy on 2025/12/15.
//

#include <stdio.h>
#include <string.h>


int main(){
    struct Student {
        int age;
        char name[20];
        int ID;
    }student1;

    struct Student *ptr1 = &student1;



    student1.age = 20;
    student1.ID = 101;
    strcpy(student1.name, "Bobby Milton");
    //
    // printf("Name of student: %s\n", student1.name);
    // printf("Age: %d\n", student1.age);
    // printf("ID #: %d\n", student1.ID);


    printf("Name of student: %s\n", ptr1->name);
    printf("Age: %d\n", (*ptr1).age);
    printf("ID #: %d\n", ptr1->ID);
    printf("Thank you");





}