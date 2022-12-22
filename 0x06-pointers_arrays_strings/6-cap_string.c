#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @s: the string
 * Return: capitilized word
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;

	char sp[] = ",;.,!?\"(){} ";

	while (s[i])
	{
		while (sp[j])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (i == 0)
					s[i] -= 32;
				else if (s[i - 1] == sp[j] || s[i - 1] == '\n'
					 || s[i - 1] == '\t')
				{
					s[i] -= 32;
				}

			}
			j++;
		}
		i++;
	}
	return (s);
}
