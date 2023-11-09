#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *head;

    for (head = (dlistint_t *)h; head; head = head->next)
        printf("%d\n", head->n);
}