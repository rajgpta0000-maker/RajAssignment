#include <stdio.h>

int main()
{
    // Declaring variables of different data types
    int age = 20;        // integer variable
    char grade = 'A';    // character variable
    float height = 5.8;  // float variable

    // Declaring a constant
    const float PI = 3.14;

    // Displaying the values
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.2f\n", height);
    printf("Value of PI (Constant): %.2f\n", PI);

    return 0;
}
