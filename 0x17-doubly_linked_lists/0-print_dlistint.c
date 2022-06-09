#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the pointer to the head of the node in the list
 * Return: the numbers of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *h1 = h;
	int i = 0;

	while (h1 != NULL)
	{
		printf("%d\n", h1->n);
		i++;
		h1 = h1->next;
	}
	return (i);
}

