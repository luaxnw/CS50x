#include <stdio.h>
#include <string.h>

int main()
{
    int pointsTable[26] = {
        1,  // a
        3,  // b
        3,  // c
        2,  // d
        1,  // e
        4,  // f
        2,  // g
        4,  // h
        1,  // i
        8,  // j
        5,  // k
        1,  // l
        3,  // m
        1,  // n
        1,  // o
        3,  // p
        10, // q
        1,  // r
        1,  // s
        1,  // t
        1,  // u
        4,  // v
        4,  // w
        8,  // x
        4,  // y
        10  // z
    };
    int points1 = 0;
    int points2 = 0;
    char tableAscii[26];

    for (int i = 0; i < 26; i++)
    {
        tableAscii[i] = 'a' + i; //cria o alfabeto a partir de 'a' + i. chegando à z
    }

    char word1[100];
    printf("Player 1 --> ");
    scanf("%99s", word1);
    int len1 = strlen(word1);

    for (int i = 0; i < len1; i++) //faz a leitura de letra da palavra e compara com o alfabeto
    {
        for (int j = 0; j < 26; j++)
        {
            if (word1[i] == tableAscii[j])
            {
                points1 += pointsTable[j]; //se a letra corresponde ao alfabeto, faz a adição conforme a pointsTable
            }
        }
    }

    char word2[100];
    printf("Player 2 --> ");
    scanf("%99s", word2);
    int len2 = strlen(word2);

    for (int i = 0; i < len2; i++) //faz a leitura de letra da palavra e compara com o alfabeto
    {
        for (int j = 0; j < 26; j++)
        {
            if (word2[i] == tableAscii[j])
            {
                points2 += pointsTable[j]; //se a letra corresponde ao alfabeto, faz a adição conforme a pointsTable
            }
        }
    }

    if (points1 > points2)
    {
        printf("Player 1 wins with %i points against %i! ", points1, points2);
    }
    else if (points1 < points2)
    {
        printf("Player 2 wins with %i points against %i! ", points2, points1);
    }
    else if (points1 == points2)
    {
        printf("\nThats a tie!\nPlayer 1 --> %i\nPlayer 2 --> %i", points1, points2);
    }

    return 0;
}