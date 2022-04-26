#include "lists.h"

/**
 * free_listint2 - frees a listint_t SLL and sets head to NULL
 * @head: pointer to the first node
 * Return: NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *agent_clear, *temp;

	if (head == NULL)
		return;
	if (head)
	{
		temp = *head;
		while (temp != NULL)
		{
			agent_clear = temp;
			temp = temp->next;
			free(agent_clear);
		}
		*head = NULL;
	}
}
