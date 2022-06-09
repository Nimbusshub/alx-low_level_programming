#include "lists.h"
/**
 * get_dnodeint_at_index - get node at the specified index
 * @head: the first node
 * @index: index to get the node from
 * Return: the node if it exists
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head1 = head;
	unsigned int i = 0;
	int flag = 0;

	if (!head)
		return (NULL);

	while (head1 != NULL)
	{
		if (i == index)
		{
			flag = 1;
			break;
		}
		head1 = head1->next;
		i++;
	}
	if (flag == 0)
		return (NULL);
	return (head1);
}
