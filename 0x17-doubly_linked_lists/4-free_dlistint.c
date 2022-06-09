#include "lists.h"
/**
 * free_dlistint - frees a doubly linked lists
 * @head: the pointer to the first node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *head1 = head;

	while (head != NULL)
	{
		head1 = head;
		head = head->next;
		free(head1);
	}
	free(head);
}


