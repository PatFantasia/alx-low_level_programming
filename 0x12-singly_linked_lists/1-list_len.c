#include "lists.h"

/**
 * list_len - gets the number of nodes
 *
 * @h: pointer to the head (first node)
 *
 * Return: number of nodes
 */


size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
