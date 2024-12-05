#include "lists.h"
/**
 * free_dlistint - free all the nodes of the list
 * @head: pointer to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *tmp = head->next;

		free(head);

		head = tmp;
	}
}
