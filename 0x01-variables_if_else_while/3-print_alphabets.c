#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter, low_letter;

	for (letter = "a"; letter <= "z"; letter++)
	{
		low_letter = tolower(letter);
		putchar(low_letter);
	}
	return (0);
}
