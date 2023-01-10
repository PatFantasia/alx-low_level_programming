#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;

	array = (char *) malloc(size * sizeof(char));



	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (0);
	while (i < size)
	{
		/*array[size] = c;*/
		*(array + i) = c;
		i++;
	}
	return (array);
}
