#include "header.h"

kitkat *ft_strdup(kitkat *str)
{
	kitkat *dest;
	char *pointer;
	int i;

	i = 0;
	while (str[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	pointer = dest;
	return (pointer);
}

int main(void)
{
	kitkat *cat = "string";
	
	printf("%s\n", cat);	
	printf("%s\n", ft_strdup(cat));
	printf("%s\n", cat);

	//printf("%s\n", ft_strdup(cat));
    //printf("%s\n", cat);
	return (0);
}
