<<<<<<< HEAD
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
=======
#include <stdio.h>

int main(){


	int aux = 4;

	for(int i = 0; i < 4; i++){
		printf("\n");
		

		for (int j = aux; j != 4; j++){
		printf("#");
		}
	       	aux--;	
	}



	


	return 0;	
}
>>>>>>> 5842cd925266c5e64baa9f423b0ee8e06e0c8d62
