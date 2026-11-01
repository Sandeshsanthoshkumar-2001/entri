#include <stdio.h>

//this is out student structure - template
struct Student
{
    //structure members
    char name[20];
    int id;
    char grade;
    float percentage;
};

int main()
{
    struct Student s1 = {"Arjun P", 1123, 'A', 86.5};  //a memory is created only when a structure variable is created.

    //to access the member we have . (dot) operator
    printf("------------------------Student Details----------------------------\n");
    printf("Name        : %s\n", s1.name);
    printf("ID          : %d\n", s1.id);
    printf("Grade       : %c\n", s1.grade);
    printf("Percentage  : %.2f\n", s1.percentage);


    return 0;

}
