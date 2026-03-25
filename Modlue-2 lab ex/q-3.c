#include <stdio.h>

int main()
{
    int a, b;

    // Taking input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    // Relational operations
    printf("\nRelational Operations:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    // Logical operations
    printf("\nLogical Operations:\n");
    printf("(a > 0 && b > 0) = %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b > 0) = %d\n", (a > 0 || b > 0));
    printf("!(a > b) = %d\n", !(a > b));

    return 0;
}
