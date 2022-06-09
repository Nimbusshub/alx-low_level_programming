#include "lists.h"
/**
 * dlistint_len - computes  the number of elements in doubly linked list
 * @h: pointer to the first node
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	if (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
