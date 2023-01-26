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
	if (h == NULL)
		return (0);

	list_t *ptr = NULL;

	int count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = h->next;
	}

	return (count);

}
