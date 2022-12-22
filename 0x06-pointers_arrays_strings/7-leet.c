#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: the string
 * Return: encoded string  @s
 */

char *leet(char *s)
{
	int i = 0, j;

	/*char letter[] = "AaEeOoTtLl";*/
	char letter[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (letter[j] != '\n')
		{
			if (s[i] == letter[j])
			{
				s[i] = code[j];
				/*break;*/
			}
			j++;
		}
		i++;
	}
	return (s);
}
