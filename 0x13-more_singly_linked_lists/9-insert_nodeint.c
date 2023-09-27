#include "lists.h"
/**
 * insert_nodeint_at_index - check the code
 * @head: head
 * @idx: int
 * @n: int
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;

	if(idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		if(head)
			new_node->next = *head;
		head = &new_node;
		return (new_node);
	}

	for (i = 0; i < idx && head != NULL && *head != NULL; i++)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		head = head->next;
	}
	return (NULL);
}
