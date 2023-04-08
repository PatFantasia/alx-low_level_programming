#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 is all strings match,
 * 1 if s1 > s2 and -1 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, result;

	while (s1[i])
		i++;

	if (s2[i])
		result = -1;
	else if (!s2[i - 2])
		result = 1;
	else if (s2[i - 1])
	{
		while (s1[j])
		{
			result = (s1[j] == s2[j]) ? 0 : -1;
			j++;
		}
	}

	return (result);
}
