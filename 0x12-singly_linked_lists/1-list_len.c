#include "lists.h"
/**
 * list_len - lists the length of nodes
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
