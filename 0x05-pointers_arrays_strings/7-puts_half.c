#include "main.h"

/**
 * put_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	int n = (i - 1) / 2;

	while (str[j] != '\0')
	{
		if (i % 2 == 0 && j > (i / 2))
			_putchar(str[j] + 0);
		else if (i % 2 != 0 && j >= n)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
