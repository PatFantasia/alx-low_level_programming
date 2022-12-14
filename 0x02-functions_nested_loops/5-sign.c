#include "main.h"

/**
 * print_sign - prints the sign of an input
 * @n: the input to check sign
 * Return : 0 if input is equal to zero,
 * 1 if it greater than zero and -1 if it less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
