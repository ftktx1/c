#include <stdio.h>

void number(int i, char **input)
{
	int array[i];
	int x = 1;
	
	while(x < i)
	{
		array[x] = x;
		printf("%i, %s \n", array[x], input[x]);
		x++;
	}
}

int main(int argc, char **argv)
{
	number(argc, argv);
	return(0);
}
