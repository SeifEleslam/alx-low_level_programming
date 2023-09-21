#include "lists.h"
/**
 * add_node - check the code
 * @str: str
 * @head: head
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
  unsigned int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->str = str ? strdup(str) : NULL;
	new->len = str ? strlen(str) : 0;
 	if (!(*head))
		*head = new;
	else
	{
  		while((*head)->next)
			*head = (*head)->next;
		(*head)->next = new;
	}
	return (new);
}
