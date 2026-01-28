#include <stdio.h>
#include <string.h>

int main()
{

    int table[26];
    char palavra[100];
    scanf("%99s", palavra);
    int len = strlen(palavra);

    for (int i = 0; i < 26; i++)
    {
        table[i] = 97 + i;
    }

    for (int j = 0; j < 26; j++)

    {
        printf("%i ", table[j]);
    }

    return 0;
}
