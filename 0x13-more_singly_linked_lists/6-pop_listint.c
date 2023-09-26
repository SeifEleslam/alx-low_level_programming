#include "lists.h"
/**
 * pop_listint - check the code
 * @head: head
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int val;

	if (!head || !(*head))
		return (0);
	ptr = *head;
	val = (int)ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (val);
}
