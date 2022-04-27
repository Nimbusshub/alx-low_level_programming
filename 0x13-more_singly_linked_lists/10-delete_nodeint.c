#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node  at index
 * @head: pointer to the head node
 * @index: index to delete from
 * Return: 1 (success) -1 (failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *agent_clear, *prevV;
	unsigned int i = 0;

	if ((head == NULL) || (*head == NULL))
		return (-1);
	if (head)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}

		else
		{
			agent_clear = *head;
			for (; i < index && agent_clear->next != NULL; i++)
			{
				prevV = agent_clear;
				agent_clear = agent_clear->next;
			}
			tmp = agent_clear->next;
			prevV->next = tmp;
			free(agent_clear);
		}
		return (1);
	}
	return (-1);
}
