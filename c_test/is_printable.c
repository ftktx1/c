#include <stdio.h>

int main ()
{
	int i;
	char c;

	i = 0;
	c = 'a';

	if(c >32)
			i = 200;

	printf("%i, %c", i, c);
	return(0);
}

