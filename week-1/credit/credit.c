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



int verificaCartao(long x)
{
	int contadorAux = contadorInteiro(x);
	int array[contadorAux];
	int sumPar = 0, sumImpar = 0, j = 0;

	while (x > 0)
	{
		array[j] = x % 10;
		x /= 10;
		j++;
	}

	for (int i = 0; i < contadorAux; i++)
	{
		if (i % 2 == 0)
		{
			sumImpar += array[i];
		}
		else 
		{
			int dobro = array[i] * 2;
			if (dobro > 9)
				dobro -= 9;

			sumPar += dobro;
		}		
	}
	return ((sumPar + sumImpar) % 10 == 0);
}

int main()
{

	long cardNumber;
	int i = 0;
	int counter = contadorInteiro(cardNumber);
	int array[counter];
	int teste = verificaCartao(cardNumber);

	printf("Informe o número do cartão. \n");
	scanf("%ld", &cardNumber);

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

	if (teste == 1){

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
	}
	else
		printf("\nNão é um cartão. \n");


	/* VISA = 13 or 16, MASTERCARD = 16, AMERICAN EXPRESS = 15
	American Express 34 or 37, MasterCard = 51, 52, 53, 54, or 55
	Visa numbers start with 4 */

	return 0;
}
