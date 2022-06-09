#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at the specified index
 * @h: the first node
 * @idx: the index to insert the node
 * @n: the new element
 * Return: the doubly linked list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head1 = *h, *head2, *new_node;
	unsigned int i = 0;
	int flag = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (head1 != NULL)
	{
		if (i == idx)
		{
			flag = 1;
			break;
		}
		head2 = head1;
		head1 = head1->next;
		i++;
	}
	if (i == idx && flag == 0)
		return (add_dnodeint_end(h, n));
	if (flag == 0)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = head1;
	new_node->prev = head1->prev;
	head1->prev = new_node;
	head2->next = new_node;

	return (new_node);
}
