#include "lists.h"

/**
 * reverse_listint - reverses a listint_t SLL
 * @head: pointer to the head node in the list
 * Return: the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevN = 0, *nextN = *head;

	if (head)
	{
		while (nextN != NULL)
		{
			nextN = nextN->next;
			(*head)->next = prevN;
			prevN = *head;
			*head = nextN;
		}
		*head = prevN;
		return (prevN);
	}
	return (NULL);
}
