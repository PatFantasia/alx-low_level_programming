#include "main.h"

/**
 * main - print "_putchar"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";

	int i = 0, length = strlen(word);

	for (i; i < length; i++)
		_putchar(word[i]);
	_putchar(\n);
	return (0);
}
