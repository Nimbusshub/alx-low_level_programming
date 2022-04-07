#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a funtion that allocates space in the heap
 * @b: the size_t size arguement of the malloc_checked function
 * Return: the memory address of malloc or exit 98
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = NULL;

	pointer = malloc(sizeof(void) * b);
	if (pointer == NULL)
		exit(98);
	else
		return (pointer);
}
