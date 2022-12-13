#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - print "_putchar"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";

	for (int i = 0; i < strlen(word); i++)
		_putchar(word[i]);
	_putchar(\n);
	return (0);
}
