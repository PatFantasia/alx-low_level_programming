#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @s: the string
 * Return: capitilized word
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;

	/*char sp[15];*/

	char sp[] = ",;,.,!?\"(){} ";
	/*{',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n'};*/

	while (s[i])
	{
		while (sp[j])
		{
			if (s[i] == sp[j] || s[i] == '\n')
			{
				if (s[i + 1] && s[i + 1] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
