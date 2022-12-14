#include "main.h"

/**
 * print_sign - prints the sign of an input
 * @n: the input to check sign
 * Return: 0 and prints 0 if n is equal to zero
 * 1 and prints + if n is greater than zero
 *-1 and print - if it less than zero
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
