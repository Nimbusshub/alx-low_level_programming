#include "lists.h"
/**
 * sum_listint - sums up all the data in listint_t SLL
 * @head: pointer to the first node
 * Return: sum of all datas
 */

int sum_listint(listint_t *head)
{
	int sum = 0, n = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n = head->n;
		sum += n;
		head = head->next;
	}
	return (0);
}
