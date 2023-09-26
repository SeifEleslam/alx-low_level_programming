#include "lists.h"
/**
 * add_node - check the code
 * @n: str
 * @head: head
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
