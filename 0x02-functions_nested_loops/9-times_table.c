#include "main.h"

/**
 * times_table - print 9 times table
 */

void times_table(void)
{
	int i = 0;

	int j, k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (j == 0)
				_putchar(k + '0');
			if (j < 10 && j != 0)
			{
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (k >= 10)
				{
					_putchar(' ');
				}
				if (k >= 10)
					_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				j == 9 ? _putchar('\n') : _putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
