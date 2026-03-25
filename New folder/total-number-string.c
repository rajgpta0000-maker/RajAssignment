#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    printf("Total number of characters = %d\n", length);

    return 0;
}
