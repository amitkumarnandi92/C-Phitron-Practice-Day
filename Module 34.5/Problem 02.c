#include <stdio.h>

int main()
{
    int n, i;
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Not Found input file");
        return 0;
    }
    fscanf(inputFile, "%d", &n);
    fclose(inputFile);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Not Found output file");
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        fprintf(outputFile, "%d ", i);
    }
    fclose(outputFile);

    return 0;
}
