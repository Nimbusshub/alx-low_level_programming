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
	int *pointer = 0;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
		return (0);
	pointer = malloc(nmemb * size + 1);
	if (pointer == NULL)
		return (0);
	while (i < (size * nmemb))
	{
		*(pointer + i) = 0;
		i++;
	}
	return (pointer);
}
