#include <stdio.h>

int main() {
    int choice;
    float r, l, b, p, n, si;
    int num, i;

    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Simple Interest (p*n*r/100)\n");
    printf("4. Print Any Table\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            printf("Area of Circle = %.2f\n", 3.14 * r * r);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            printf("Area of Rectangle = %.2f\n", l * b);
            break;

        case 3:
            printf("Enter Principal, Rate and Time: ");
            scanf("%f %f %f", &p, &r, &n);
            si = (p * r * n) / 100;
            printf("Simple Interest = %.2f\n", si);
            break;

        case 4:
            printf("Enter number for table: ");
            scanf("%d", &num);
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", num, i, num * i);
            }
            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

