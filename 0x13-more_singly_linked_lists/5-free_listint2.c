#include "lists.h"
/**
 * free_listint2 - check the code
 * @head: head
 */
void free_listint2(listint_t *head)
{
	if (!head)
		return;
	free_listint2(head->next);
	free(head);
}
