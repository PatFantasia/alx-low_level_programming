#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array
 * @n: the number of elements that will be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		printf("%d, ", a[i]);
		i++;
	}
}
