#include "main.h"

/**
 * print_square - draws a square, ended by a new line on the terminal
 * @n: the number of times '#' should be printed
 * just return a new line if n is zero or negative
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
