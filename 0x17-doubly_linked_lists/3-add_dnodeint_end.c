#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a doubly linked list
 * @head: the pointer to the first node
 * @n: the element to initialize the new_node with
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head1 = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = *head;
		*head = new_node;
		return (new_node);
	}

	while (head1->next != NULL)
		head1 = head1->next;

	new_node->prev = head1;
	head1->next = new_node;

	return (new_node);
}
