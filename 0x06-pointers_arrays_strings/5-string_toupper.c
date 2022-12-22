#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s : the string
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0, j = n - 1, temp;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
