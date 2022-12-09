#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print alphabet's character except e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
