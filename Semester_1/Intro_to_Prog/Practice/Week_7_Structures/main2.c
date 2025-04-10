#include <stdio.h>
#include <string.h>

typedef struct Relative
{
    char name[20];
    int age;
    long int phone_number;
} Relative;

void main()
{
    Relative relative1 ={"James Moyo", 35, 612331244};
    Relative relative2 ={"John Moyo", 35,  632342684};

    printf("%s is my relative and he is %d years old. His cell is %ld.\n", relative1.name, relative1.age, relative1.phone_number);
    printf("%s is my relative and he is %d years old. His cell is %ld.\n", relative2.name, relative2.age, relative2.phone_number);

    if  (relative1.age == relative2.age)
    {
        printf("The relatives are of the same age.\n");
    }
    else
    {
        printf("The relatives are of different ages.\n");
    }

}