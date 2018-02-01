#include <stdio.h>

int primes (int nbr)
{
	int i = 3;
	int j = 2;

	if (nbr == 1)
		return 1;
	else if (nbr == 2)
		return 2;
	//else if (nbr == 3)
	//	return 3;
	while (i <= nbr)
	{
		while (j <= (i / 2) + 1)
		{
			if (i % j == 0)
				break ;
			else if (j > i / 2)
			{
				printf("%i, ", i);
			}
			j++;
		}
		i = i + 2;
		j = 2;
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
	primes(x);	
	return(0);
}
