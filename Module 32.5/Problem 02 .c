#include <stdio.h>

int sum_Last_Digit(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int x;
    scanf("%d", &x);
    return (x%10) + sum_Last_Digit(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int total = sum_Last_Digit(n);
    printf("%d\n", total);
    return 0;
}

