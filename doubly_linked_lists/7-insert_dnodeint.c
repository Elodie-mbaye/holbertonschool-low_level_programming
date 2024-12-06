#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at the index of
 * a dlistint_t linked list
 * @h: pointer to the head of the adress
 * @idx: is the index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);

	if (tmp->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;

	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
