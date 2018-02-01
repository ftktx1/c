#include <stdio.h>

unsigned char	reverse_bits (unsigned char x)
{
    
	return(x % 2);
}

int main (void)
{
	unsigned char c = 'C';
	printf("%x\n", c);
	printf("%x", reverse_bits(c));
	return (0);
}
