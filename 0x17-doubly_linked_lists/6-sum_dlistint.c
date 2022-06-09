#include "lists.h"
/**
 * sum_dlistint - sum all the elements of a doubly linked list
 * @head: the first node
 * Return: sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *head1 = head;
	int sum = 0;

	if (!head)
		return (0);

	while (head1 != NULL)
	{
		sum += head1->n;
		head1 = head1->next;
	}
	return (sum);
}

