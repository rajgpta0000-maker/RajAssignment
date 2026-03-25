#include <stdio.h>

int main()
{
    int a, b;
    char op;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    // Performing operation
    switch(op)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        case '%':
            printf("Result = %d", a % b);
            break;

        default:
            printf("Invalid operator entered!");
    }

    return 0;
}
