#include "lists.h"

/**
 * add_nodeint - adds new nodes at the begining of listint_t list
 * @head: pointer to head which holds the add of the first node
 * @n: the value to initialise the elements in the nodes with
 * Return: add of the new node (Sucess) or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
