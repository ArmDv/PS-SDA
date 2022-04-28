# include <stdio.h>
# include <math.h>

// Functia pentru printarea factorilor primi ai unui numar N 
void factoriPrimi(int n)
{
	//Printam numarul de "2" care divide n
	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}

	// n trebuie sa fie impar in acest punct
	// incep un loop de la i=3 la sqrt din n
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// Cat timp i se divide la n, se printeaza i si se divide iar la n
		while (n%i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
	}

	// Tratarea conditiei in care n este un numar prim mai mare ca 2 
	if (n > 2)
		printf("%d ", n);

	
}

int main()
{
	int n = 315;
	factoriPrimi(n);
	return 0;
}