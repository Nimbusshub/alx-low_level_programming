#include "lists.h"
/**
 * free_list - frees a list_t linked list
 * @head: the pointer to the first node in a linked list
 * Return: free all nodes (Success)
 */
void free_list(list_t *head)
{
	list_t *new_node = NULL;

	while (head)
	{
		new_node = head;
		head = head->next;

		free(new_node->str);

		free(head);
		free(new_node);
	}
}
