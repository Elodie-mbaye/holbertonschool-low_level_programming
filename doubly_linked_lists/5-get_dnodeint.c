#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of the list
 * @head: pointer to the head of the list
 * @index: the nth node we want to display
 *
 * Return: the nth node we want to display
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index != 0 && head)
	{
		head = head->next;
		index--;
	}

	return (head);
}
