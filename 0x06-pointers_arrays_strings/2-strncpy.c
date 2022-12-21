#include "main.h"

/**
 * _strncopy - copies two strings
 * @src: source of string to append
 * @dest: destination for appending src string
 * @n: add n byte to dest from src
 * Return: a pointer containing the copy
 */

char *_strncopy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
