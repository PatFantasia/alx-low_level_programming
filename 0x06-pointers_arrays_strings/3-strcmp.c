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
	int j = 0, result;


		while (s1[j] && s2[j])
		{
			if (s1[j] != s2[j])
			{
				result = s1[j] - s2[j];
				break;
			}
			else
				result = s1[j] - s2[j];
			j++;
		}

	return (result);
}
