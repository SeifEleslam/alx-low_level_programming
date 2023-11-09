#include "lists.h"

/**
 * add_dnodeint_end - add node to end of d linked list
 * @head: head of the list
 * @n: int
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	for (curr = *head; curr && curr->next;)
		curr = curr->next;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = curr;
	if (!*head)
		*head = new_node;
	else
		curr->next = new_node;
	return (new_node);
}
