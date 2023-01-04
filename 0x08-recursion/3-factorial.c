#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: the number to compute it factorial
 * Return: the result
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
}
