#include "lists.h"
/**
 * add_node - adds new node to the begining of a linked list
 * @head: pointer to the linked list
 * @str: the string to be duplicated in the new node
 * Return: address of the new node (Success) or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	while (str[len])
		len++;
	new->len = len;
	return (new);
}
