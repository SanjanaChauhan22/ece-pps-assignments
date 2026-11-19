#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source, *destination;
    int ch;
    char sourceFile[100], destFile[100];

    printf("Source file name: ");
    scanf("%99s", sourceFile);
    printf("Destination file name: ");
    scanf("%99s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL)
    {
        printf("Error: Source file not foud!\n");
        exit(1);
    }
    destination = fopen(destFile, "w");
    if (destination == NULL)
    {
        printf("Error: Could not create destination file!\n");
        fclose(source);
        exit(1);
    }
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }
    fclose(source);
    fclose(destination);

    printf("File copied successsfully!\n");
    return 0;
}