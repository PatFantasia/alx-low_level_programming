#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print the state of n
 * n : random value
 * Return : Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positve\n");
	else if (n < 0)
		printf("is negative\n");
	else
	{
		printf("is zero\n");
	}
	return (0);
}
