#include <stdio.h>

int main()
{

    int userInput;

    printf("Provide the height: ");
    scanf("%i", &userInput);

    if (userInput > 8 || userInput < 1)
        printf("Height must be between 1 and 8. ");

    else
    {

        for (int i = 0; i <= userInput; i++)
        {

            for (int s = 0; s <= userInput - i; s++)
            {
                printf(" ");
            }

            for (int j = 1; j < (1 + i); j++)
            {
                printf("#");
            }

            printf("  ");

            for (int j = 1; j < (1 + i); j++)
            {
                printf("#");
            }

            printf("\n");
        }
    }

    return 0;
}

