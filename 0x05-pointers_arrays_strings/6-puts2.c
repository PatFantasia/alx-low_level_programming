#include "main.h"

/**
 * puts2 - prints every odd character from a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i % 2 == 0)
	{
		_putchar(str[i] + 0);
		i++;
	}
	_putchar('\n');
}
