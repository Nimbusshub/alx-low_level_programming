#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates through an array and prints all
 * elements
 * @array: the array to be printed
 * @size: the size of the array
 * @action: a pointer to a function with an arguement int
 * Return: the elements in the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
