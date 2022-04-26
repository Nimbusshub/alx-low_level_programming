#include "lists.h"

/**
 * get_nodeint_at_index - get a node at an index
 * @head: pointer to the head node
 * @index: index of the node to be fetched
 * Return: the data (n) in the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}
