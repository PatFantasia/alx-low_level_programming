#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: the string
 * Return: encoded string  @s
 */

char *leet(char *s)
{
	int i = 0, j = 0;

	char letter[] = "AaEeOoTtLl";
	char code[] = "4433007711";

	while (s[i])
	{
		while (letter[j])
		{
			if (s[i] == letter[j])
			{
				s[i] = code[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
