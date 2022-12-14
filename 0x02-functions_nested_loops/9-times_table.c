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
			if (k >= 10)
				_putchar((k / 10) + '0');
			if (j < 9)
			{
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
				if (k < 10)
					_putchar(' ');
			}
			else
			{
				_putchar((k % 10) + '0');
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
