#include "lists.h"

/**
 * print_dlistint - print every nodes of the list
 * @h: Pointer to the adress of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
