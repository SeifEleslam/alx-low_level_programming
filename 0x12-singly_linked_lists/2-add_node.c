#include "lists.h"
/**
 * main - check the code
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
	new->str = strdup(str);
	new->len = (unsigned int)strlen(new->str);
	*head = new;
	return (new);
}
