#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
	int counter = 0, char letter;

	while (counter < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		counter++;
	}
	_putchar('\n');
}
