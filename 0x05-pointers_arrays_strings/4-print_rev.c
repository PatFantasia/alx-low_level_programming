#include "main.h"

/**
 * print_rev - prints a string in reversed
 * followed by a new line
 * @str: string to print
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		s[i] == '\0' ? continue : _putchar(s[i] + 0);
		i--;
	}
	_putchar('\n');
}
