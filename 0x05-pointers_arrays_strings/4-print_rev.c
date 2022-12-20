#include "main.h"

/**
 * print_rev - prints a string in reversed
 * followed by a new line
 * @str: string to print
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (str[i] != '\0')
	{
		_putchar(str[i] + 0);
		if (i == 0)
			break;
		i--;
	}
	_putchar('\n');
}
