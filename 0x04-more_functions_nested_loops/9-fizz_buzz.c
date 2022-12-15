#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line.
 * for multiples of three print Fizz,  instead of the number
 * and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Each number or word should be separated by a space
*/

void fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		i % 3 == 0 ? printf("Fizz ") : i % 5 == 0 ? printf("Buzz ") : i % 15 == 0 ? printf("FizzBuzz ") : printf("%d ", i);
		i++;
	}
	printf("\n");
}
