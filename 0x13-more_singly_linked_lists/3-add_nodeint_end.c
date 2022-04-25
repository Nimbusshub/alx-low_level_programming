#include "lists.h"

/**
 * add_nodeint_end - adds new nodes at the end of listint_t SLL
 * @head: pointer to the head which points to the first node
 * @n: value to initialise the data in the nodes with
 * Return: new node (Sucess) or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	temp = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
