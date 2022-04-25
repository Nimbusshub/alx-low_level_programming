#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: pointer to the head node of the SLL
 * Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (n);

}
