#include "lists.h"

/**
 * free_listint - frees a listint_t SLL
 * @head: pointer to the first node
 * Return: NULL.
 */

void free_listint(listint_t *head)
{
	listint_t *agent_clear, *temp = head;

	while (temp != NULL)
	{
		agent_clear = temp;
		temp = temp->next;
		free(agent_clear);
	}
	free(temp);
}
