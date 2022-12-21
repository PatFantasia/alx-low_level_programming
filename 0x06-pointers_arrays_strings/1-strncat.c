#include "main.h"

/**
 * _strncat - concactenates two strings
 * @src: source of string to append
 * @dest: destination for appending src string
 * @n: add n byte to dest from src
 * Return: a pointer containing the concatenation result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (dest[i])
		i++;

	while (k < n && src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);

}
