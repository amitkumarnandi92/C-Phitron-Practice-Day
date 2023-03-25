#include <stdio.h>

int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    int n, num, sum = 0;
    fscanf(inputFile, "%d", &n);

    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &num);
        sum += num % 10;
    }

    fprintf(outputFile, "Sum = %d\n", sum);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
