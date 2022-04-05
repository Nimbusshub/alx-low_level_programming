#include <stdlib.h>
#include "main.h"
/**
 * create_array - this function will create and initialize an array
 * @size: size of the array
 * @c: the special character that will be printed
 * Return: pointer (success) or return NULL if size is 0
 * or the memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *pointer;

	if (size == 0)
		return (NULL);
	pointer = (char *)malloc(size * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	while (index < size)
	{
		*(pointer + index) = c;
		index++;
	}
	return (pointer);
	free(pointer);
}
