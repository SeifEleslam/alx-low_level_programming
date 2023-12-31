#include "lists.h"

/**
 * add_dnodeint - add node to begginig of d linked list
 * @head: head of the list
 * @n: int
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	if (*head)
	{
		new_node->prev = (*head)->prev;
		if ((*head)->prev)
			(*head)->prev->next = new_node;
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
