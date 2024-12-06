#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at indes of
 * a dlistint_t linked list
 * @index: The index of the node that should be deleted
 * @head: Pointer to the head of the list
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	while (i < index)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
