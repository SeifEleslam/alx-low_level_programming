#include "lists.h"
/**
 * add_nodeint_end - check the code
 * @n: int
 * @head: head
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head))
		*head = new;
	else
	{
		while ((*head)->next)
			head = &((*head)->next);
		(*head)->next = new;
	}
	return (new);
}
