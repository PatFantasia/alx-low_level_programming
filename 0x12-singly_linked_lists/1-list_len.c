#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
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