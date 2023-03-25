#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, n, i, j, k;
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Not found input file");
        return 0;
    }

    fscanf(inputFile, "%d", &t);
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        printf("Not found output file");
        return 0;
    }

    for (i = 0; i < t; i++)
    {
        fscanf(inputFile, "%d", &n);
        if (n > 0)
        {
            for (j = n; j >= -n; j--)
            {
                fprintf(outputFile, "%d ", j);
            }
        }
        else
        {
            k = abs(n);
            for (j = -k; j <= k; j++)
            {
                fprintf(outputFile, "%d ", j);
            }
        }
        fprintf(outputFile, "\n");
    }
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
