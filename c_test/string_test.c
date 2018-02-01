#include <stdio.h>
int main (void)
{
	char *str = "test";
	int i = 0;
	while (str[])
	{
		i++;
		printf("%i\n", i);
	}
	return(0);
}
