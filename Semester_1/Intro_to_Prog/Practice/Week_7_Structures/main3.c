#include <stdio.h>

typedef struct Student
{
    char name[12];
    float gpa;
} student;

void main()
{

    student s1 = {"Ali", 3.5};
    student s2 = {"Sara", 3.8};
    student s3 = {"John", 3.2};
    student s4 = {"Mary", 3.9};
    student s5 = {"David", 3.6};

    student students[5] = {s1, s2, s3, s4, s5};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("Student %d:\t Name: %s, GPA: %.f\n", i + 1, students[i].name, students[i].gpa);
    }
}