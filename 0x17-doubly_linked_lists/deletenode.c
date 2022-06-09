#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node from index specified
 * @head: the first node
 * @index: the index to delete the node from
 * Return: 1 (Success) or -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1 = *head, *head2;
	unsigned int i = 0;
	int flag = 0;

	if (!head)
		return (-1);
	while (head1 != NULL)
	{
		if (i == index)
		{
			flag = 1;
			break;
		}
		head2 = head1;
		head1 = head1->next;
		i++;
	}
	if (flag == 0)
		return (-1);
	if (head1->next != NULL)
		head1->next->prev = head2;
	if (index > 0)
		head2->next = head1->next;
	free(head1);
	return (1);
}
