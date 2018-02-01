#include <stdio.h>

int main(void)
{
    int x;
    int y;
    char c;
    char *mystr;
	char *str;
	
	str = "abcdefg";
    mystr = "11111111111";

    x = 0;
    y = 0;
    c = str[0];
    while (str[x] != '\0')
    {
        x = x + 1;
    }

    x = x-1;
    while (str[x] != c)
    {
        mystr[y] = str[x];
        y = y + 1;
        x = x - 1;
    }

    return(0);
}
