
/**
 * _strncopy - copies two strings
 * @src: source of string to append
 * @dest: destination for appending src string
 * @n: add n byte to @dest from @src
 * Return: @dest a pointer containing the copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
