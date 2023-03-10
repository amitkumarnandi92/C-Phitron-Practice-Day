#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr [i]);
    }
    int *p = arr;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", *(p + i));

    }
    printf ("\n");

    return 0;

}