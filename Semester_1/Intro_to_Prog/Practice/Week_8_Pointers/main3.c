#include <stdio.h>
#include <string.h>

struct Family
{
    int age;
    char name[10];
    char gender;
    char relationship[20];
} member1, member2;

void main()
{

    strcpy(member1.name, "William");
    member1.age = 60;
    member1.gender = 'M';
    strcpy(member1.relationship, "Parent");

    struct Family *pmember2 = &member2;
    struct Family *pmember1 = &member1;

    strcpy(pmember2->name, "Winston");

    pmember2->gender = 'M';
    strcpy(pmember2->relationship, "Uncle");

    pmember2->age = 55;

    printf("These are my family members and their details: \n");
    printf("1. %s\nAge: %d\nGender: %c\nRelationship: %s\n", (*pmember2).name, (*pmember2).age, (*pmember2).gender, (*pmember2).relationship);
    printf("2. %s\nAge: %d\nGender: %c\nRelationship: %s\n", (*pmember1).name, (*pmember1).age, (*pmember1).gender, (*pmember1).relationship);

    (*pmember1).age = 61;
    printf("New Update!!!!\n %s just celebrated his birthday today, so his new age is : %d. Yaaay!!!!! Congratulations, %s!\n", pmember1->name, pmember1->age, pmember1->name);
}