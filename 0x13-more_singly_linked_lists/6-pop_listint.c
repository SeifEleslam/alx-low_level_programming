#include "lists.h"
/**
 * pop_listint - check the code
 * @head: head
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *prvH;
	int val;

	if (!head || !(*head))
		return (0);
	prvH = *head;
	val = (int)prvH->n;
	head = &(prvH->next);
	free(prvH);
	return (val);
}
