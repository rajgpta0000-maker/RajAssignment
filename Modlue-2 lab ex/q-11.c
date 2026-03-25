#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    // Input details of students
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
