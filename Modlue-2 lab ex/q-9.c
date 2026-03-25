#include <stdio.h>

int main()
{
    int num = 10;     // normal variable
    int *ptr;         // pointer variable

    ptr = &num;       // pointer stores the address of num

    printf("Original value of num = %d\n", num);

    // Modify value using pointer
    *ptr = 20;

    printf("Modified value of num = %d\n", num);

    return 0;
}
