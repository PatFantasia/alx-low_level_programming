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
			if (j < 9)
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(k + '0');
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
