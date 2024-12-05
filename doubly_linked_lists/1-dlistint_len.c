#include "lists.h"
/**
 * dlistint_len - return the number of nodes of a list
 * @h: pointer to the adress of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
