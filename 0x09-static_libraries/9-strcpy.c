#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy destination
 * @src: source for copying
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
