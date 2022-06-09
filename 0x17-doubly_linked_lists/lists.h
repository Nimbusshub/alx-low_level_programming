#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct func - doubly linked list
 * @n: element in the list
 * @next: pointer to the next node
 * @prev: pointer to the previous node
 *
 * Description: doubly linked list node structure
 *
 */

typedef struct func
{
	int n;
	struct func *next;
	struct func *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* _LISTS_H_ */
