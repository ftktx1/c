#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void ft_putstr(char *str)
{
	int index = 0;

	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	return ;
}

int main (void)
{
	char str1[] = "Hello People";

	ft_putchar(str1[0] + 1);
	ft_putchar(str1[1 + 2]);

	ft_putstr(str1);

	return(0);
}
