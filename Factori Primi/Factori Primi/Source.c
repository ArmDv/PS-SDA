#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, num, Prim;

	/* Citire de la tastatura */
	printf("Introduceti un numar: ");
	scanf("%d", &num);

	printf("Factorii primi ai numarului %d sunt: \n", num);

	/*Cautarea tuturor factorilor primi */
	for (i = 2; i <= num; i++)
	{
		/* Verificam daca i este factor prim al numarului  */
		if (num%i == 0)
		{
			/* Verificam daca i este prim */
			Prim = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i%j == 0)
				{
					Prim = 0;
					break;
				}
			}

			/* Afisez valoare lui i daca acesta este prim si un factor al numarului */
			if (Prim == 1)
			{
				printf("%d, ", i);
			}
		}
	}

	return 0;
}