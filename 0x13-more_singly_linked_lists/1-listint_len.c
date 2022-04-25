#include "lists.h"

/**
 * listint_len - prints the number of nodes
 * @h: pointer to the first node in the list
 * Return: number of elements in a linked listint_t list (Sucess)
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
