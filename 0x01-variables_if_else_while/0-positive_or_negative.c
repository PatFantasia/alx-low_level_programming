#include <stdlib.h>

#include <time.h>

/**
 * main :  print the state of n
 * n : random value
 * return : always 0
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
