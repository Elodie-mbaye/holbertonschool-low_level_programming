#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added in the new new.
 * Return: Address of the new element , or Null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	int i = 0;

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	while (dup_str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
