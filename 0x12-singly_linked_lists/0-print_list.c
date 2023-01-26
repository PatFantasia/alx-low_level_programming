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
	size_t count = 0;
	
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);

}
