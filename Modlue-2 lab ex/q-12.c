#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    // Create and write to file
    fp = fopen("sample.txt", "w");
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);
    fclose(fp);

    // Open file again to read
    fp = fopen("sample.txt", "r");
    printf("\nContents of the file:\n");

    while(fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}
