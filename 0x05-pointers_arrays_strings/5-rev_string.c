#include "main.h"

/**
 * rev_string - prints a string in reversed
 * followed by a new line
 * @s: string to print
 */

void rev_string(char *s)
{
	int i = 0, j = 0;


	while (s[i] != '\0')
	{
		i++;
	}
	char rev_output[];

	while (i >= 0)
	{
		if (s[i] != '\0')
			rev_output[j] = s[i];
		i--;
		j++;
	}
}
