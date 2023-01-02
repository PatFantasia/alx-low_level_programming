#include "main.h"

/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i])
	{
		j = 0;
		k = 1 /* failed Flag */
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				k = 0 /* success Flag */
				break;
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}
	return (i);
}
