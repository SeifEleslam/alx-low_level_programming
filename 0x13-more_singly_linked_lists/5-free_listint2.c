#include "lists.h"
/**
 * free_listint - check the code
 * @head: head
 */
void free_listint2(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
