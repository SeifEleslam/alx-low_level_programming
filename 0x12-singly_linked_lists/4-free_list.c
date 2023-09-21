#include "lists.h"
/**
 * free_list - check the code
 * @head: head
 */
void free_list(list_t *head)
{
	if(head && head->next)
		free_list(head->next);
	if(head)
		free(head);
}
