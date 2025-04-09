#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int ID_no;
    float marks;

};

void main()
{
    struct Student student1, student2;

    // Assign values to student1
    strcpy(student1.name, "John Doe");
    student1.ID_no = 12345;
    student1.marks = 85.5;

    // Assign values to student2
    strcpy(student2.name, "Jane Smith");
    student2.ID_no = 67890;
    student2.marks = 92.0;

    // Print details of student1
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("ID No: %d\n", student1.ID_no);
    printf("Marks: %.2f\n", student1.marks);

    // Print details of student2
    printf("\nStudent 2:\n");
    printf("Name: %s\n", student2.name);
    printf("ID No: %d\n", student2.ID_no);
    printf("Marks: %.2f\n", student2.marks);
}
