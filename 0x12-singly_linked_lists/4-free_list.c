#include "lists.h"
/**
 * free_list - check the code
 * @head: head
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head);
}
