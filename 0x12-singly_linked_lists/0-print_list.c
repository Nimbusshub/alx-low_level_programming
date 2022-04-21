#include "lists.h"
/**
 * print_list - prints the values in a singly linked list from head
 * @h: pointer to the first node
 * Return: the number of nodes (success)
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
		}
		h = h->next;
		count++;
		printf("\n");
	}
	return (count);
}
