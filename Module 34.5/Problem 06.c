#include <stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "a");

    int year;
    while (fscanf(inputFile, "%d", &year) != EOF)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            fprintf(outputFile, "%d-->YES\n", year);
        }
        else
        {
            fprintf(outputFile, "%d-->NO\n", year);
        }
    }

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
