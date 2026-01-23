#include <stdio.h>

int contadorInteiro(long x)
{
	int i = 0;
	while (x > 0)
	{
		x /= 10;
		i++;
	}
	return i;
}

int main()
{

	long cardNumber = 370360000000014;
	int i = 0;
	int counter = contadorInteiro(cardNumber);
	int array[counter];

	while (cardNumber > 0)
	{
		i++;
		array[i] = cardNumber % 10;
		cardNumber /= 10;
	}

	for (int j = counter; j != 0; j--) // Printa em reverso
	{
		printf("%i ", array[j]);
	}

	switch (counter)
	{
	case 13:

		if (array[12] == 4)
		{
			printf("\nVISA");
			// Visa
		}
		break;

	case 16:

		if (array[counter] == 5 &&
			(array[counter - 1] == 1 || array[counter - 1] == 2 || array[counter - 1] == 3 ||
			 array[counter - 1] == 4 || array[counter - 1] == 5))

		{
			printf("\nMASTERCARD");
			// Mastercard
		}

		if (array[counter] == 4)
		{
			printf("\nVISA");
			// Visa
		}
		break;
	case 15:

		if (array[counter] == 3 && array[counter - 1] == 7)
		{
			printf("\nAMERICAN EXPRESS");
			// American Express
		}
		break;
	}

	/* VISA = 13 or 16, MASTERCARD = 16, AMERICAN EXPRESS = 15
	American Express 34 or 37, MasterCard = 51, 52, 53, 54, or 55
	Visa numbers start with 4 */

	return 0;
}
