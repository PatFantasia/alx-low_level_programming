#include "main.h"

/**
 * _isupper - checks if a given character is uppercase
 * @c: number to check
 * Return: 0 if c is not uppercase and 1 if it is
 */

int _isupper(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			return (1);
	}
	return (0);
}
