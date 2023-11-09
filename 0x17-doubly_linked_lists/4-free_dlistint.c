#include "lists.h"

/**
 * free_dlistint - add node to end of d linked list
 * @head: head of the list
 * Return: new node
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
		free_dlistint(head->next), free(head);
}
