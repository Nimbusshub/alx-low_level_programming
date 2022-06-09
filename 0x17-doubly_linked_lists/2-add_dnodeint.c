#include "lists.h"
/**
 * add_dnodeint - add a new node at the begining of a doubly linked list
 * @head: the pointer to the first node in the list
 * @n: the element in the newly created mode
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *head1 = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	
	new_node->next = head1;
	head1->prev = new_node;
	*head = new_node;

	return (new_node);
}
