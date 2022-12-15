#include "main.h"

/**
 * print_diagonal - draws a diagonal line, ended by a new line on the terminal
 * @n: the number of times '/' should be printed
 * just return a new line if n is zero or negative
 */

void print_diagonal(int n)
{
	int counter, space_counter;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 0; counter < n; counter++)
		{
			space_counter = 0;
			while (space_counter < counter)
			{
				_putchar(' ');
				space_counter++;
			}
			_putchar('\\');
			_putchar('\n');
		}

	}

}
