#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    // Taking input from user
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Concatenating strings
    strcat(str1, str2);

    // Display concatenated string
    printf("Concatenated string: %s\n", str1);

    // Display length of concatenated string
    printf("Length of string: %lu\n", strlen(str1));

    return 0;
}
