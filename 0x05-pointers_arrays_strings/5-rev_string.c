#include "main.h"

/**
 * rev_string - prints a string in reversed
 * followed by a new line
 * @s: string to print
 */

void rev_string(char *s)
{
	int i, j;

	char rev = s[0];

	i = 0;
	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		i--;
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
	}
}
