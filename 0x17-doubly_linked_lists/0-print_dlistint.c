#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *head;
    size_t len;

    for (head = (dlistint_t *)h, len = 0; head; head = head->next)
        printf("%d\n", head->n), len++;
    return (len);
}