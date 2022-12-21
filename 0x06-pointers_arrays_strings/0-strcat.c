#include "main.h"

/**
 * _strcat - concactenates two strings
 * @src: source of string to append
 * @dest: destination for appending src string
 * Return: a pointer containing the concatenation result
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);

}
