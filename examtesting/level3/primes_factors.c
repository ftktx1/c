#include <stdio.h>

int primes (int nbr)
{
	int j = 2;
	while (j <= (nbr / 2) + 1)
	{
		if (nbr % j == 0)
			break ;
		 if (j > nbr / 2)
			return (nbr);
		j++;
	}
	return (0);
}

int atoi(char *nbr)
{
	int x = 0;
	int index = 0;
	while (nbr[index] >= '0' && nbr[index] <= '9')
	{
		x = (x * 10) + nbr[index] - 48;
		index++;
	}
	return(x);
}

int main (int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = 3;
	int z = 0;

	while (x % 2 == 0 && x > 0)
	{
		printf("2");
		x = x / 2;
		if (x != 1)
			printf ("*");
	}
	while (x > 1)
		{
			z = primes(y);
			if (z == 0)
			{
				z = y;
			}
			if (x % z == 0)
			{
				printf("%i", z);
				x = x / z;
				if (x != 1)
					printf("*");
				y = 3;
			}
			else y = y + 2;
		}
	//}
}
