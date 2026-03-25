#include <stdio.h>

int main()
{
    int i;

    // Using break statement
    printf("Using break statement:\n");
    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
            break;   // stop the loop when i becomes 5
        printf("%d ", i);
    }

    // Using continue statement
    printf("\n\nUsing continue statement:\n");
    for(i = 1; i <= 10; i++)
    {
        if(i == 3)
            continue;   // skip printing 3
        printf("%d ", i);
    }

    return 0;
}
