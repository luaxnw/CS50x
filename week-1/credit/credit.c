#include <stdio.h>

int main()
{

	long cardNumber = 4003600000000014;
	long auxCardNumber = cardNumber;
	int counter = 0;
	int i = 0;
	

	while (auxCardNumber > 0)
	{
		auxCardNumber /= 10;
		counter++;
	}
	printf("%i", counter);
	int array[counter];

	switch (counter)
	{
	case 13:
		while (cardNumber > 0)
		{
			i++;
			int digito = cardNumber % 10;
			printf("%i", digito);
			cardNumber /= 10;
			array[i] = digito;
		}
	}

	/* VISA = 13 or 16, MASTERCARD = 16, AMERICAN EXPRESS = 15 */

	return 0;
}
