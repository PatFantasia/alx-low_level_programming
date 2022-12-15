#include "main.h"

/**
 * print_line - draws a straight line, ended by a new line on the terminal
 * @n: the number of times '_' should be printed
 * just return a new line if n is zero or negative
 */

void print_line(int n)
{
	int counter;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < n; counter++)
			_putchar('_');
		_putchar('\n');
	}

}
