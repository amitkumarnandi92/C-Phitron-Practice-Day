#include <stdio.h>

int sum_of_elements_with_last_digit_zero(int n, int arr[])
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 10 == 0)
        {

            sum += arr[i];
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = sum_of_elements_with_last_digit_zero(n, arr);
    printf("%d\n", result);

    return 0;
}
