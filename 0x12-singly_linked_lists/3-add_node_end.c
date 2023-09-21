#include "lists.h"
/**
 * add_node_end - check the code
 * @str: str
 * @head: head
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->str = str ? strdup(str) : NULL;
	new->len = str ? strlen(str) : 0;
 	if (!(*head))
		*head = new;
	else
	{
  		while((*head)->next)
			head = &((*head)->next);
		(*head)->next = new;
	}
	return (new);
}
