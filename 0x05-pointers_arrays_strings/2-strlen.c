#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: the length in integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
