#include <stdio.h>

// Function declaration
int factorial(int n);

int main()
{
    int num, result;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    result = factorial(num);

    // Display result
    printf("Factorial of %d = %d", num, result);

    return 0;
}

// Function definition
int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
