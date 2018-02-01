#include <stdio.h>

int main (void)
{
	char *word;
	char *word_part;

	word = "string";
	word_part = &word[2];

	printf("%s, %s, %c\n", &*(word + 2), word_part, *(word));
	return (0);
}
