#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - a funtion that allocates memory blocks of nmemb
 * in the heap
 * @nmemb: the size_t nmemb arguement of calloc function
 * @size: size of the datatype
 * Return: the memory address of calloc or return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		*(pointer + i) = 0;
		i++;
	}
	return (pointer);
}
