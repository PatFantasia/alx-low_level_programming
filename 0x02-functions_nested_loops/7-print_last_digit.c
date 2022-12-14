#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the number to check
 * Return: the last digit of a given number
 */

int print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);
	else
		return (-(n % 10));
}
