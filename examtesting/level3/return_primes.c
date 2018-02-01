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
	int z;

	while (y <= x )
	{
		z = primes(y);
		if (z != 0){ printf("%i, ", z);}
		y = y + 2;	
	}
	return(0);
}
