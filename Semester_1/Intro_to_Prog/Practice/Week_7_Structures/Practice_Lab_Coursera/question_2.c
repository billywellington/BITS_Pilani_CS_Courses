#include <stdio.h>

typedef struct Employee
{
    int ID;
    char name[20];
    char role[10];
} employee;

void main()
{
    employee emp1;
    employee emp2;
    employee emp3;

    printf("\nEnter the name of the first employee: ");
    scanf("%s", emp1.name);
    printf("\nEnter the ID of the first employee: ");
    scanf("%d", &emp1.ID);
    printf("\nEnter the role of the first employee: ");
    scanf("%s", emp1.role);

    printf("\n\nEnter the name of the second employee: ");
    scanf("%s", emp2.name);
    printf("\nEnter the ID of the second employee: ");
    scanf("%d", &emp2.ID);
    printf("\nEnter the role of the second employee: ");
    scanf("%s", emp2.role);

    printf("\n\nEnter the name of the third employee: ");
    scanf("%s", emp3.name);
    printf("\nEnter the ID of the third employee: ");
    scanf("%d", &emp3.ID);
    printf("\nEnter the role of the third employee: ");
    scanf("%s", emp3.role);

    if (emp1.ID == 2)
    {
        printf("\n\nThe details of the employee with the ID#: 2 are :\n");
        printf("ID = %d, Name = %s, Job = %s\n", emp1.ID, emp1.name, emp1.role);
    }

    else if (emp2.ID == 2)
    {
        printf("\n\nThe details of the employee with the ID#: 2 are :\n");
        printf("ID = %d, Name = %s, Job = %s\n", emp2.ID, emp2.name, emp2.role);
    }

    else
    {

        printf("\n\nThe details of the employee with the ID#: 2 are :\n");
        printf("ID = %d, Name = %s, Job = %s\n", emp3.ID, emp3.name, emp3.role);
    }
}
