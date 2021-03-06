#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index
 * @head: pointer to the head node
 * @idx: index at which the new node would be inserted
 * @n: the value to initialize new node with
 * Return: add of new node (sucess)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	if (head)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);


		tmp = *head;
		new_node->n = n;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
		}

		else
		{
			for (; i < idx - 1 && tmp != NULL; i++)
				tmp = tmp->next;
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
