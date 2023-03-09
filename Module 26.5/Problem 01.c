#include <stdio.h>

int main()
{
    int x, y;
    float avg, *p;

    scanf("%d %d", &x, &y);

    p = &avg;

    *p = (float) (x + y) / 2;

    printf ("%.3f\n", avg);

    return 0;
}