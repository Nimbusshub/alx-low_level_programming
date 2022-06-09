#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the pointer to the head of the node in the list
 * Return: the numbers of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

