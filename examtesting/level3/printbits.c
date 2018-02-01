#include <stdio.h>

int main(void)
{
	unsigned char c = '4';
	c = ((c & 0xf0) >> 4) | ((c & 0x0f) << 4);
	printf("%c", c);
}
