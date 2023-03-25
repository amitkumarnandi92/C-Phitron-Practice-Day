#include <stdio.h>

int main()
{
    FILE *inputFile, *outputFile;
    int n;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Not found file\n");
        return 0;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Not found file\n");
        return 0;
    }

    while (fscanf(inputFile, "%d", &n) == 1)
    {
        fprintf(outputFile, "%d ", n);
    }
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
