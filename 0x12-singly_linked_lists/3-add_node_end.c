#include "lists.h"
/**
 * add_node_end - adds new nodes to the end of the linked list
 * @head: pointer to the first node
 * @str: string to be duplicated in the new node
 * Return: append a new node to the end of the SLL (Success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;
	unsigned int len = 0;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (!str)
		return (NULL);
	new_node->str = strdup(str);
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
