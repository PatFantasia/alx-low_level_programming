#include "main.h"
/**
 * _strpbrk - a function that searches a
 *            string for any of a set of bytes.
 *
 * @s: pointer to input string
 * @accept: pointer to string we
 *         searching for in @s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (accept[i])
	{
		j = 0;
		k = 1; /* failed Flag */
		while (s[j])
		{
			if (s[j] == accept[j])
			{
				k = 0; /* success Flag */
				break;
			}
			j++;
		}
		if (k == 0)
			break;
		i++;
	}
	if (k == 1)
		return ('\0');
	return (accept + j);
}
