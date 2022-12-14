#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: given number from which start the increment
 */

void print_to_98(int n)
{
	int i, j;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			i == 98 ? printf("%d\n", i) : printf("%d, ", i);
		}
	}
	else if (n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			j == 98 ? printf("%d\n", j) : printf("%d, ", j);
		}
	}
}
