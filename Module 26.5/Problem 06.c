#include <stdio.h>
#include <string.h>

void make_even_decimal_characters_uppercase(char str[])
{

    for (int i = 0; i < strlen(str); i++)
    {

        if ((int)str[i] % 2 == 0)
        {

            str[i] = toupper(str[i]);
        }
    }
}

int main()
{
    char str[100];

    scanf("%s", str);

    make_even_decimal_characters_uppercase(str);
    printf("%s\n", str);

    return 0;
}
