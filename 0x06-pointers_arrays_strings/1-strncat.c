#include "main.h"

/**
 * _strcat - concactenates two strings
 * @src: source of string to append
 * @dest: destination for appending src string
 * Return: a pointer containing the concatenation result
 */

char *_strcat(char *dest, char *src)
{
	char mergeStr[];

	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		mergeStr[i] = dest[i];
		i++;
	}

	while (src[j] != '\0')
	{
		mergeStr[i] = src[j];
		i++;
		j++;
	}

	mergeStr[i] = '\0';
	return (mergeStr);

}
