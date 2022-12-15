#include "main.h"

/**
 * _isdigit - checks if a given integer is a digit
 * @c: digit to check
 * Return: 0 if c isn't a digit and 1 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
