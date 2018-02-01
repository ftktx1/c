#include <stdio.h>

int main(void)
{
    int x;
    int y;
	int maxstr;
	int midstr;

    char c;
	char swapvar;
	char *str;
	
	str = "abcdefg1234567";

    x = 0;
    y = 0;
    c = str[0];
    while (str[x] != '\0')
    {
        x = x + 1;
    }

    x = x-1;
	maxstr = x;
	midstr = x/2;

    while (y <= midstr)
    {
        swapvar = str[y];
		str[y] = str[x];
		str[x] = swapvar;
        y = y + 1;
        x = x - 1;
    }

	printf("rev string is: %s", str);

    return(0);
}
