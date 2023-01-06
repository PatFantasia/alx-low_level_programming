#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: buffer where we will copy to
 * @src: what we are to copy
 * @n: n bytes of @src
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
