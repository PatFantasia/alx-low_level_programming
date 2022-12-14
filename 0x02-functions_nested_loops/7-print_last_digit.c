#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number to check
 * Return: the last digit of a given number
 */

int print_last_digit(int n)
{
	int last_digit = n < 0 ? -(n % 10) : n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
