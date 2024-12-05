#include "lists.h"

/**
 * add_dnodeint  - adds a new node at the beginning of a dlistint_t list
 * @head:pointer to the adress of the list
 * @n: the number we want to add at the beginning of the list
 *
 * Return:NULL if malloc is fail, the new node otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head)
		(*head)->prev = tmp;

	*head = tmp;

	return (tmp);
}
