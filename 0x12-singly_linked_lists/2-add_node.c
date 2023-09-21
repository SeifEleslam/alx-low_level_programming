#include "lists.h"
/**
 * add_node - check the code
 * @str: str
 * @head: head
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->len = str ? strlen(new->str) : 0;
	new->str = new->len > 0 ? strdup(str) : NULL;
	*head = new;
	return (new);
}