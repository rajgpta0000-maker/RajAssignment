#include <stdio.h>

int main()
{
    int a, b, c;
    int largest, smallest, choice;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using if-else to find largest
    if(a >= b && a >= c)
        largest = a;
    else if(b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Using if-else to find smallest
    if(a <= b && a <= c)
        smallest = a;
    else if(b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("\nUsing if-else:\n");
    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    // Switch-case demonstration
    printf("\nEnter 1 to display largest and 2 to display smallest: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Largest number = %d", largest);
            break;

        case 2:
            printf("Smallest number = %d", smallest);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
